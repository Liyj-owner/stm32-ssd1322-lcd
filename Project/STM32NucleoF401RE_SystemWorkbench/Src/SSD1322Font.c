#include <string.h>
#include <stddef.h>
#include <SSD1322Font.h>

typedef struct {
	char utf8[5];
	uint8_t utf8_len;
	uint16_t unicode;
} Utf8UnicodeChar;

Utf8UnicodeChar charFromUtf8(const char *chr) {
	Utf8UnicodeChar result;
	memset(result.utf8, 0, sizeof(result));

	if ((*chr & 128) == 0) { // 0xxxxxxx (0 - 127)
		result.unicode = *chr;
		result.utf8_len = 1;
	}
	else if ((*chr & 192) == 128) { // 10xxxxxx (128 - 191)
		result.unicode = *chr;
		result.utf8_len = 1;
	}
	else if ((*chr & 224) == 192) { // 110xxxxx xxxxxxxx (192 - 8191)
		result.unicode = ((*chr & 31) << 6) | (*(chr + 1) & 63);
		result.utf8_len = 2;
	}
	else if ((*chr & 240) == 224) { // 1110xxxx 10xxxxxx 10xxxxxx (8192 - 65535)
		result.unicode = ((*chr & 15) << 12) | ((*(chr + 1) & 63) << 6) | (*(chr + 2) & 63);
		result.utf8_len = 3;
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
static Character * getCharacterFromArray(uint16_t unicode_char, Character **array, int count) {
	int first = 0;
	int last = count - 1;
	int middle = (first + last) / 2;

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

Character * Font_getCharUnicode(Font *font, uint16_t unicode_char) {
	return getCharacterFromArray(unicode_char, font->character_table, font->character_count);
}
