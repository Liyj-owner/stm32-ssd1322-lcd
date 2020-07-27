#pragma once
#include "main.h"

void ssd1322_init(SPI_HandleTypeDef *hspi, GPIO_TypeDef *port_nss, uint16_t pin_nss, GPIO_TypeDef *port_dc, uint16_t pin_dc);
void ssd1322_display(void);
void ssd1322_fill(uint8_t color);
void ssd1322_drawPixel(int32_t x, int32_t y, uint8_t color);
