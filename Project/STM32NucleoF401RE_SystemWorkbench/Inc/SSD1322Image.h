#pragma once

#include <stdint.h>

// compression methods:
// 0 - none (uncompressed image_data)
// 1 - LZ77~ compression

typedef struct {
    uint16_t width, height;
    uint8_t *image_data;
    uint32_t image_data_length;
    uint8_t bits_per_pixel;
    uint8_t compression_method;
} Image;
