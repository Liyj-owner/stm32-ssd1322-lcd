#pragma once

#include <stdint.h>

typedef struct {
	uint16_t width;
	uint16_t height;
	uint16_t bytes_per_line;
	uint16_t height_offset;
	uint16_t unicode;
	char *data;
} Character;

typedef struct {
	uint16_t font_size;
	uint8_t bits_per_pixel;
	uint16_t character_count;
	Character **character_table;
} Font;

Character * Font_getCharUTF8(Font *font, char *utf8_char, uint8_t *byte_count);
Character * Font_getCharUnicode(Font *font, uint16_t unicode_char);
