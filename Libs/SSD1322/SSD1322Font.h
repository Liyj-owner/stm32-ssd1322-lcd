#pragma once

#include <stdint.h>

typedef struct {
	uint16_t width;
	uint16_t height;
	uint16_t bytes_per_line;
	uint16_t height_offset;
	uint32_t unicode;
	uint8_t *data;
} Character;

typedef struct {
	uint16_t font_size;
	uint8_t bits_per_pixel;
	uint16_t character_count;
	Character **character_table;
} Font;

Character * Font_getCharUTF8(Font *font, char *utf8_char, uint8_t *out_byte_count);
Character * Font_getCharUnicode(Font *font, uint32_t unicode_char);
uint16_t Font_getCharWidth(Font *font, char *utf8_char, uint8_t *out_byte_count);
