#include "SSD1322.h"
#include "lz77.h"
#include <math.h>

#define SSD1322_SETCOMMANDLOCK           0xFD
#define SSD1322_DISPLAYOFF               0xAE
#define SSD1322_DISPLAYON                0xAF
#define SSD1322_SETCLOCKDIVIDER          0xB3
#define SSD1322_SETDISPLAYOFFSET         0xA2
#define SSD1322_SETSTARTLINE             0xA1
#define SSD1322_SETREMAP                 0xA0
#define SSD1322_FUNCTIONSEL              0xAB
#define SSD1322_DISPLAYENHANCE           0xB4
#define SSD1322_SETCONTRASTCURRENT       0xC1
#define SSD1322_MASTERCURRENTCONTROL     0xC7
#define SSD1322_SETPHASELENGTH           0xB1
#define SSD1322_DISPLAYENHANCEB          0xD1
#define SSD1322_SETPRECHARGEVOLTAGE      0xBB
#define SSD1322_SETSECONDPRECHARGEPERIOD 0xB6
#define SSD1322_SETVCOMH                 0xBE
#define SSD1322_NORMALDISPLAY            0xA6
#define SSD1322_INVERSEDISPLAY           0xA7
#define SSD1322_SETMUXRATIO              0xCA
#define SSD1322_SETCOLUMNADDR            0x15
#define SSD1322_SETROWADDR               0x75
#define SSD1322_WRITERAM                 0x5C
#define SSD1322_ENTIREDISPLAYON          0xA5
#define SSD1322_ENTIREDISPLAYOFF         0xA4
#define SSD1322_SETGPIO                  0xB5
#define SSD1322_EXITPARTIALDISPLAY       0xA9
#define SSD1322_SELECTDEFAULTGRAYSCALE   0xB9

#define SSD1322_MIN_SEG	0x1C
#define SSD1322_MAX_SEG	0x5B

static SPI_HandleTypeDef *_hspi;
static GPIO_TypeDef *_port_nss;
static uint16_t _pin_nss;
static GPIO_TypeDef *_port_dc;
static uint16_t _pin_dc;

#define SCREEN_WIDTH 256
#define SCREEN_HEIGHT 64
#define SCREEN_BPP 4

// compression methods
#define IMAGE_COMPRESSION_NONE		0 // (uncompressed image_data)
#define IMAGE_COMPRESSION_LZ77		1 // LZ77~ compression

// used compression method
#define IMAGE_COMPRESSION_METHOD	IMAGE_COMPRESSION_LZ77

// image decompression buffer size
#define DECOMPRESSION_BUFFER_SIZE 	(180 * 180)

// screen graphic buffer
static union {
	uint8_t buff1d[SCREEN_HEIGHT * SCREEN_WIDTH / (8 / SCREEN_BPP)];
	uint8_t buff2d[SCREEN_HEIGHT][SCREEN_WIDTH / (8 / SCREEN_BPP)];
} screen_buffer;

// image decompression buffer
static uint8_t decompression_buffer[DECOMPRESSION_BUFFER_SIZE];

static void _sendCommand(uint8_t command) {
	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_SET);
	HAL_GPIO_WritePin(_port_dc, _pin_dc, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_RESET);

	HAL_SPI_Transmit(_hspi, &command, 1, 0xFF);
	//HAL_Delay(0);

	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_SET);
}

static void _sendData(uint8_t data) {
	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_SET);
	HAL_GPIO_WritePin(_port_dc, _pin_dc, GPIO_PIN_SET);
	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_RESET);

	HAL_SPI_Transmit(_hspi, &data, 1, 0xFF);
	//HAL_Delay(0);

	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_SET);
}

static void _sendDataBytes(uint8_t *data, int32_t length) {
	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_SET);
	HAL_GPIO_WritePin(_port_dc, _pin_dc, GPIO_PIN_SET);
	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_RESET);

	HAL_SPI_Transmit(_hspi, data, length, 0xFF);
	//HAL_Delay(0);

	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_SET);
}

void ssd1322_fill(uint8_t color) {
	_sendCommand(SSD1322_SETCOLUMNADDR);
    _sendData(SSD1322_MIN_SEG);
    _sendData(SSD1322_MAX_SEG);

    _sendCommand(SSD1322_SETROWADDR);
    _sendData(0);
    _sendData(63);

    color = (color & 0x0F) | (color << 4);
	for (uint8_t y = 0; y < 64; y++) {
		for (uint8_t x = 0; x < 128; x++) {
			screen_buffer.buff2d[y][x] = color;
		}
    }
}

void ssd1322_init(SPI_HandleTypeDef *hspi, GPIO_TypeDef *port_nss, uint16_t pin_nss, GPIO_TypeDef *port_dc, uint16_t pin_dc) {
	_hspi = hspi;
	_port_nss = port_nss;
	_pin_nss = pin_nss;
	_port_dc = port_dc;
	_pin_dc = pin_dc;

	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_SET);
	HAL_GPIO_WritePin(_port_dc, _pin_dc, GPIO_PIN_SET);

	_sendCommand(SSD1322_SETCOMMANDLOCK);// 0xFD
	_sendData(0x12);// Unlock OLED driver IC

	_sendCommand(SSD1322_DISPLAYOFF);// 0xAE

	_sendCommand(SSD1322_SETCLOCKDIVIDER);// 0xB3
	_sendData(0x91);// 0xB3

	_sendCommand(SSD1322_SETMUXRATIO);// 0xCA
	_sendData(0x3F);// duty = 1/64

	_sendCommand(SSD1322_SETDISPLAYOFFSET);// 0xA2
	_sendData(0x00);

	_sendCommand(SSD1322_SETSTARTLINE);// 0xA1
	_sendData(0x00);

	_sendCommand(SSD1322_SETREMAP);// 0xA0
	_sendData(0x14);//Horizontal address increment,Disable Column Address Re-map,Enable Nibble Re-map,Scan from COM[N-1] to COM0,Disable COM Split Odd Even
	_sendData(0x11);//Enable Dual COM mode

	_sendCommand(SSD1322_SETGPIO);// 0xB5
	_sendData(0x00);// Disable GPIO Pins Input

	_sendCommand(SSD1322_FUNCTIONSEL);// 0xAB
	_sendData(0x01);// selection external vdd

	_sendCommand(SSD1322_DISPLAYENHANCE);// 0xB4
	_sendData(0xA0);// enables the external VSL
	_sendData(0xFD);// 0xfFD,Enhanced low GS display quality;default is 0xb5(normal),

	_sendCommand(SSD1322_SETCONTRASTCURRENT);// 0xC1
	_sendData(0xFF);// 0xFF - default is 0x7f

	_sendCommand(SSD1322_MASTERCURRENTCONTROL);// 0xC7
	_sendData(0x0F);// default is 0x0F

	// Set grayscale
	_sendCommand(SSD1322_SELECTDEFAULTGRAYSCALE); // 0xB9

	_sendCommand(SSD1322_SETPHASELENGTH);// 0xB1
	_sendData(0xE2);// default is 0x74

	_sendCommand(SSD1322_DISPLAYENHANCEB);// 0xD1
	_sendData(0x82);// Reserved;default is 0xa2(normal)
	_sendData(0x20);//

	_sendCommand(SSD1322_SETPRECHARGEVOLTAGE);// 0xBB
	_sendData(0x1F);// 0.6xVcc

	_sendCommand(SSD1322_SETSECONDPRECHARGEPERIOD);// 0xB6
	_sendData(0x08);// default

	_sendCommand(SSD1322_SETVCOMH);// 0xBE
	_sendData(0x04);// 0.86xVcc;default is 0x04

	_sendCommand(SSD1322_NORMALDISPLAY);// 0xA6

	_sendCommand(SSD1322_EXITPARTIALDISPLAY);// 0xA9

	_sendCommand(SSD1322_DISPLAYON);// 0xAF

	ssd1322_fill(0);
	ssd1322_display();
}

void ssd1322_display(void) {
	_sendCommand(SSD1322_SETCOLUMNADDR);
	_sendData(SSD1322_MIN_SEG);
	_sendData(SSD1322_MAX_SEG);

	_sendCommand(SSD1322_SETROWADDR);
	_sendData(0);
	_sendData(63);

	_sendCommand(SSD1322_WRITERAM);

	_sendDataBytes(screen_buffer.buff1d, sizeof(screen_buffer));
}

int getMask(BitsPerPixel bpp) {
	return ((1 << bpp) - 1) << (8 - bpp);
}

uint8_t getPixelColor(uint8_t input, int bit_nr, BitsPerPixel bpp) {
	const int Mask = getMask(bpp) >> bit_nr;
	input &= Mask;
	input = input >> (8 - bit_nr - bpp);
	return input * ((1 << SCREEN_BPP) - 1) / ((1 << bpp) - 1);
}

void ssd1322_drawPixel(int x, int y, uint8_t color) {
	if (x < 0 || x >= SCREEN_WIDTH || y < 0 || y >= SCREEN_HEIGHT) {
		return;
	}
	color &= 0x0F;
	int col = x / 2;
	int pix = x % 2;
	int shift = (1 - pix) * 4;
	int bits = color << shift;
	int clear = 0xF0 >> shift;
	screen_buffer.buff2d[y][col] &= clear;
	screen_buffer.buff2d[y][col] |= bits;
}

static void _drawImageBPP(int pos_x, int pos_y, int width, int height, const uint8_t *image_data, BitsPerPixel bpp) {
	const uint8_t PixelsPerByte = 8 / bpp;
	const int DataCols = width / PixelsPerByte + ((width % PixelsPerByte) ? 1 : 0);

	for (int y = 0; y < height; y++) {
		for (int col = 0; col < DataCols; col++) {
			uint8_t byte = image_data[y * DataCols + col];
			for (int bit = 0; bit < 8; bit += bpp) {
				int x = col * PixelsPerByte + (bit / bpp);
				if (x < width) {
					uint8_t color = getPixelColor(byte, bit, bpp);
					if (color) {
						ssd1322_drawPixel(pos_x + x, pos_y + y, color);
					}
				}
			}
		}
	}
}

void ssd1322_drawString(char *str, int pos_x, int pos_y, Font *font) {
	Character *ch;
	int curr_pos_x = pos_x;
	int curr_pos_y = pos_y;
	while (*str) {
		if (*str == '\n') {
			curr_pos_y += font->font_size;
			curr_pos_x = pos_x;
			str++;
		}
		else {
			unsigned char char_len;
			ch = Font_getCharUTF8(font, str, &char_len);
			if (ch != NULL) {
				_drawImageBPP(curr_pos_x, curr_pos_y + ch->height_offset, ch->bytes_per_line * 8 / font->bits_per_pixel, ch->height, ch->data, font->bits_per_pixel);
				curr_pos_x += ch->width;
			}
			str += char_len;
		}
	};
}

void ssd1322_drawImage(int pos_x, int pos_y, const Image *image) {
	const uint8_t *image_data = image->image_data;

#if IMAGE_COMPRESSION_METHOD == IMAGE_COMPRESSION_NONE
	// uncompressed
#elif IMAGE_COMPRESSION_METHOD == IMAGE_COMPRESSION_LZ77
	uint32_t size = lz77_decompress(image_data, image->image_data_length, decompression_buffer, sizeof(decompression_buffer));
	if (size > sizeof(decompression_buffer)) {
		// too small decompression buffer
		return;
	}
	image_data = decompression_buffer;
#endif

	_drawImageBPP(pos_x, pos_y, image->width, image->height, image_data, image->bits_per_pixel);
}
