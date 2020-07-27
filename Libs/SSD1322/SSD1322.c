#include "SSD1322.h"

#define SSD1322_SETCOMMANDLOCK 0xFD
#define SSD1322_DISPLAYOFF 0xAE
#define SSD1322_DISPLAYON 0xAF
#define SSD1322_SETCLOCKDIVIDER 0xB3
#define SSD1322_SETDISPLAYOFFSET 0xA2
#define SSD1322_SETSTARTLINE 0xA1
#define SSD1322_SETREMAP 0xA0
#define SSD1322_FUNCTIONSEL 0xAB
#define SSD1322_DISPLAYENHANCE 0xB4
#define SSD1322_SETCONTRASTCURRENT 0xC1
#define SSD1322_MASTERCURRENTCONTROL 0xC7
#define SSD1322_SETPHASELENGTH 0xB1
#define SSD1322_DISPLAYENHANCEB 0xD1
#define SSD1322_SETPRECHARGEVOLTAGE 0xBB
#define SSD1322_SETSECONDPRECHARGEPERIOD 0xB6
#define SSD1322_SETVCOMH 0xBE
#define SSD1322_NORMALDISPLAY 0xA6
#define SSD1322_INVERSEDISPLAY 0xA7
#define SSD1322_SETMUXRATIO 0xCA
#define SSD1322_SETCOLUMNADDR 0x15
#define SSD1322_SETROWADDR 0x75
#define SSD1322_WRITERAM 0x5C
#define SSD1322_ENTIREDISPLAYON 0xA5
#define SSD1322_ENTIREDISPLAYOFF 0xA4
#define SSD1322_SETGPIO 0xB5
#define SSD1322_EXITPARTIALDISPLAY 0xA9
#define SSD1322_SELECTDEFAULTGRAYSCALE 0xB9

#define MIN_SEG	0x1C
#define MAX_SEG	0x5B

static SPI_HandleTypeDef *_hspi;
static GPIO_TypeDef *_port_nss;
static uint16_t _pin_nss;
static GPIO_TypeDef *_port_dc;
static uint16_t _pin_dc;


static union {
	uint8_t buff1d[64 * 128];
	uint8_t buff2d[64][128];
} screen_buffer;

static void sendCommand(uint8_t command) {
	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_SET);
	HAL_GPIO_WritePin(_port_dc, _pin_dc, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_RESET);

	HAL_SPI_Transmit(_hspi, &command, 1, 0xFF);
	//HAL_Delay(0);

	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_SET);
}

static void sendData(uint8_t data) {
	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_SET);
	HAL_GPIO_WritePin(_port_dc, _pin_dc, GPIO_PIN_SET);
	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_RESET);

	HAL_SPI_Transmit(_hspi, &data, 1, 0xFF);
	//HAL_Delay(0);

	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_SET);
}

static void sendDataBytes(uint8_t *data, int32_t length) {
	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_SET);
	HAL_GPIO_WritePin(_port_dc, _pin_dc, GPIO_PIN_SET);
	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_RESET);

	HAL_SPI_Transmit(_hspi, data, length, 0xFF);
	//HAL_Delay(0);

	HAL_GPIO_WritePin(_port_nss, _pin_nss, GPIO_PIN_SET);
}

void ssd1322_fill(uint8_t color) {
	sendCommand(SSD1322_SETCOLUMNADDR);
    sendData(MIN_SEG);
    sendData(MAX_SEG);

    sendCommand(SSD1322_SETROWADDR);
    sendData(0);
    sendData(63);

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

	sendCommand(SSD1322_SETCOMMANDLOCK);// 0xFD
	sendData(0x12);// Unlock OLED driver IC

	sendCommand(SSD1322_DISPLAYOFF);// 0xAE

	sendCommand(SSD1322_SETCLOCKDIVIDER);// 0xB3
	sendData(0x91);// 0xB3

	sendCommand(SSD1322_SETMUXRATIO);// 0xCA
	sendData(0x3F);// duty = 1/64

	sendCommand(SSD1322_SETDISPLAYOFFSET);// 0xA2
	sendData(0x00);

	sendCommand(SSD1322_SETSTARTLINE);// 0xA1
	sendData(0x00);

	sendCommand(SSD1322_SETREMAP);// 0xA0
	sendData(0x14);//Horizontal address increment,Disable Column Address Re-map,Enable Nibble Re-map,Scan from COM[N-1] to COM0,Disable COM Split Odd Even
	sendData(0x11);//Enable Dual COM mode

	sendCommand(SSD1322_SETGPIO);// 0xB5
	sendData(0x00);// Disable GPIO Pins Input

	sendCommand(SSD1322_FUNCTIONSEL);// 0xAB
	sendData(0x01);// selection external vdd

	sendCommand(SSD1322_DISPLAYENHANCE);// 0xB4
	sendData(0xA0);// enables the external VSL
	sendData(0xFD);// 0xfFD,Enhanced low GS display quality;default is 0xb5(normal),

	sendCommand(SSD1322_SETCONTRASTCURRENT);// 0xC1
	sendData(0xFF);// 0xFF - default is 0x7f

	sendCommand(SSD1322_MASTERCURRENTCONTROL);// 0xC7
	sendData(0x0F);// default is 0x0F

	// Set grayscale
	sendCommand(SSD1322_SELECTDEFAULTGRAYSCALE); // 0xB9

	sendCommand(SSD1322_SETPHASELENGTH);// 0xB1
	sendData(0xE2);// default is 0x74

	sendCommand(SSD1322_DISPLAYENHANCEB);// 0xD1
	sendData(0x82);// Reserved;default is 0xa2(normal)
	sendData(0x20);//

	sendCommand(SSD1322_SETPRECHARGEVOLTAGE);// 0xBB
	sendData(0x1F);// 0.6xVcc

	sendCommand(SSD1322_SETSECONDPRECHARGEPERIOD);// 0xB6
	sendData(0x08);// default

	sendCommand(SSD1322_SETVCOMH);// 0xBE
	sendData(0x04);// 0.86xVcc;default is 0x04

	sendCommand(SSD1322_NORMALDISPLAY);// 0xA6

	sendCommand(SSD1322_EXITPARTIALDISPLAY);// 0xA9

	sendCommand(SSD1322_DISPLAYON);// 0xAF

	ssd1322_fill(0);
	ssd1322_display();
}

void ssd1322_display(void) {
	sendCommand(SSD1322_SETCOLUMNADDR);
	sendData(MIN_SEG);
	sendData(MAX_SEG);

	sendCommand(SSD1322_SETROWADDR);
	sendData(0);
	sendData(63);

	sendCommand(SSD1322_WRITERAM);

	sendDataBytes(screen_buffer.buff1d, sizeof(screen_buffer));
}

void ssd1322_drawPixel(int32_t x, int32_t y, uint8_t color) {
	color &= 0x0F;
	int32_t col = x / 2;
	int32_t pix = x % 2;
	uint8_t shift = (1 - pix) * 4;
	uint8_t bits = color << shift;
	uint8_t clear = 0xF0 >> shift;
	screen_buffer.buff2d[y][col] &= clear;
	screen_buffer.buff2d[y][col] |= bits;
}
