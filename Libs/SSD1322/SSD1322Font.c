#include <string.h>
#include <stddef.h>
#include <SSD1322Font.h>

typedef struct {
	char utf8[5];
	uint8_t utf8_len;
	uint32_t unicode;
} Utf8UnicodeChar;

Utf8UnicodeChar charFromUtf8(const char *chr) {
	Utf8UnicodeChar result;
	memset(&result, 0, sizeof(result));

	if ((chr[0] & 0b10000000) == 0) { // 0xxxxxxx (U+0000 - U+007F)
		result.unicode = chr[0];
		result.utf8_len = 1;
	}
	else if ((chr[0] & 0b11000000) == 0b10000000) { // 10xxxxxx (U+0080 - U+00BF)
		result.unicode = chr[0];
		result.utf8_len = 1;
	}
	else if ((chr[0] & 0b11100000) == 0b11000000) { // 110xxxxx xxxxxxxx (U+00C0 - U+1FFF)
		result.unicode = ((chr[0] & 0b00011111) << 6) | (chr[1] & 0b00111111);
		result.utf8_len = 2;
	}
	else if ((chr[0] & 0b11110000) == 0b11100000) { // 1110xxxx 10xxxxxx 10xxxxxx (U+0800 - U+FFFF)
		result.unicode = ((chr[0] & 0b00001111) << 12) | ((chr[1] & 0b00111111) << 6) | (chr[2] & 0b00111111);
		result.utf8_len = 3;
	}
	else if ((chr[0] & 0b11111000) == 0b11110000) { // 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx (U+00010000 - U+001FFFFF)
		result.unicode = ((chr[0] & 0b00000111) << 18) | ((chr[1] & 0b00111111) << 12) | ((chr[2] & 0b00111111) << 6) | (chr[3] & 0b00111111);
		result.utf8_len = 4;
	}
	else if ((chr[0] & 0b11111100) == 0b11111000) { // 111110xx 10xxxxxx 10xxxxxx 10xxxxxx 10xxxxxx (U+00200000 - U+03FFFFFF)
		result.unicode = ((chr[0] & 0b00000011) << 24) | ((chr[1] & 0b00111111) << 18) | ((chr[2] & 0b00111111) << 12) | ((chr[3] & 0b00111111) << 6) | (chr[4] & 0b00111111);
		result.utf8_len = 5;
	}
	else if ((chr[0] & 0b11111110) == 0b11111100) { // 1111110x 10xxxxxx 10xxxxxx 10xxxxxx 10xxxxxx 10xxxxxx (U+04000000 - U+7FFFFFFF)
		result.unicode = ((chr[0] & 0b00000001) << 30) | ((chr[1] & 0b00111111) << 24) | ((chr[2] & 0b00111111) << 18) | ((chr[3] & 0b00111111) << 12) | ((chr[4] & 0b00111111) << 6) | (chr[5] & 0b00111111);
		result.utf8_len = 6;
	}

	memcpy(result.utf8, chr, result.utf8_len);
	return result;
}

Character * Font_getCharUTF8(Font *font, char *utf8_char, uint8_t *byte_count) {
	Utf8UnicodeChar ch = charFromUtf8(utf8_char);
	*byte_count = ch.utf8_len;
	return Font_getCharUnicode(font, ch.unicode);
}

// binary search
static Character * getCharacterFromArray(uint32_t unicode_char, Character **array, int count) {
	uint32_t first = 0;
	uint32_t last = count - 1;
	uint32_t middle = (first + last) / 2;

	while (first <= last) {
		if (array[middle]->unicode < unicode_char) {
			first = middle + 1;
		}
		else if (array[middle]->unicode == unicode_char) {
			return array[middle];
		} else {
			last = middle - 1;
		}

		middle = (first + last) / 2;
	}

	return NULL;
}

Character * Font_getCharUnicode(Font *font, uint32_t unicode_char) {
	return getCharacterFromArray(unicode_char, font->character_table, font->character_count);
}
