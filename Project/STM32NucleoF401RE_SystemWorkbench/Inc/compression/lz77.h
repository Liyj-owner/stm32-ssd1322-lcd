#pragma once

#include <stdint.h>

uint32_t lz77_compress(const uint8_t *input, uint32_t input_length, uint8_t *output, uint32_t output_limit);
uint32_t lz77_decompress(const uint8_t *input, uint32_t input_length, uint8_t *output, uint32_t output_limit);
