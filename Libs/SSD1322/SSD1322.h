#pragma once
#include "main.h"
#include "SSD1322Font.h"
#include "SSD1322Image.h"
#include <stdint.h>

typedef enum {
	BPP_1 = 1,
	BPP_2 = 2,
	BPP_4 = 4,
	BPP_8 = 8,
	BPP_24 = 24,
} BitsPerPixel;

void ssd1322_init(SPI_HandleTypeDef *hspi, GPIO_TypeDef *port_nss, uint16_t pin_nss, GPIO_TypeDef *port_dc, uint16_t pin_dc);
void ssd1322_display(void);
void ssd1322_fill(uint8_t color);
void ssd1322_drawPixel(int x, int y, uint8_t color);
void ssd1322_drawString(char *ch, int pos_x, int pos_y, Font *font);
void ssd1322_drawImage(int pos_x, int pos_y, const Image *image);
