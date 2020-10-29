#include "font1.h"
// characters:  ,.0123456789:;ABCDEFGHIKLMNOPQRSTVWXYZabcdefghijklmnopqrstuvwxyz
// count: 65
// font size: 40
// bits per pixel: 1

// Character:   unicode: 32
static char character_data_32[] = {
};
static Character character_32 = {
  20, // width
  0, // height
  0, // bytes per line
  0, // height offset
  32, // unicode id
  character_data_32, // data
};

// Character: , unicode: 44
static char character_data_44[] = {
    0, 192,
    0, 192,
    1, 192,
    1, 192,
    3, 128,
    7,   0,
   15,   0,
    4,   0,
};
static Character character_44 = {
  20, // width
  8, // height
  2, // bytes per line
  31, // height offset
  44, // unicode id
  character_data_44, // data
};

// Character: . unicode: 46
static char character_data_46[] = {
    1, 128,
    3, 192,
    3, 192,
    1, 128,
};
static Character character_46 = {
  20, // width
  4, // height
  2, // bytes per line
  30, // height offset
  46, // unicode id
  character_data_46, // data
};

// Character: 0 unicode: 48
static char character_data_48[] = {
    0,  63,   0,
    0, 255, 128,
    1, 255, 192,
    3, 225, 224,
    7, 128, 224,
   15,   0,  96,
   30,   0, 112,
   28,   0, 112,
   56,   0, 112,
   56,  48,  96,
   48, 112,  96,
   48,  96, 224,
  112,   0, 224,
  112,   1, 192,
  112,   3, 192,
   48,   7, 128,
   56,  15,   0,
   60,  62,   0,
   31, 252,   0,
   15, 248,   0,
    7, 224,   0,
};
static Character character_48 = {
  20, // width
  21, // height
  3, // bytes per line
  13, // height offset
  48, // unicode id
  character_data_48, // data
};

// Character: 1 unicode: 49
static char character_data_49[] = {
    0,  14,
    0,  30,
    0,  62,
    0, 124,
    1, 252,
    3, 252,
    3, 220,
    0,  24,
    0,  24,
    0,  56,
    0,  56,
    0,  48,
    0,  48,
    0, 112,
    0, 112,
    0,  96,
    0, 224,
    0, 224,
    3, 248,
   15, 248,
    7, 248,
};
static Character character_49 = {
  20, // width
  21, // height
  2, // bytes per line
  13, // height offset
  49, // unicode id
  character_data_49, // data
};

// Character: 2 unicode: 50
static char character_data_50[] = {
    0,  63,   0,
    0, 255, 128,
    1, 255, 192,
    3, 225, 224,
    7, 128, 224,
   15,   0, 224,
   14,   0, 224,
   12,   0, 224,
    0,   0, 192,
    0,   1, 192,
    0,   7, 128,
    0,  15,   0,
    0,  62,   0,
    0, 252,   0,
    1, 240,   0,
    7, 192,   0,
   31, 128,   0,
   62,   0,   0,
  127, 254,   0,
  127, 254,   0,
  127, 254,   0,
};
static Character character_50 = {
  20, // width
  21, // height
  3, // bytes per line
  13, // height offset
  50, // unicode id
  character_data_50, // data
};

// Character: 3 unicode: 51
static char character_data_51[] = {
    3, 255, 248,
    7, 255, 248,
    3, 255, 240,
    0,   1, 224,
    0,   7, 192,
    0,  15,   0,
    0,  30,   0,
    0, 124,   0,
    0, 240,   0,
    3, 240,   0,
    7, 254,   0,
   15,  15,   0,
   12,   3,   0,
    0,   3,   0,
    0,   3, 128,
    0,   3, 128,
    0,   3, 128,
    0,   3,   0,
    0,   7,   0,
  224,  15,   0,
  224,  30,   0,
  112, 124,   0,
  127, 248,   0,
   63, 240,   0,
   15, 192,   0,
};
static Character character_51 = {
  21, // width
  25, // height
  3, // bytes per line
  13, // height offset
  51, // unicode id
  character_data_51, // data
};

// Character: 4 unicode: 52
static char character_data_52[] = {
    0,   3, 128,
    0,   7, 128,
    0,  15,   0,
    0,  31,   0,
    0,  63,   0,
    0,  63,   0,
    0, 102,   0,
    0, 206,   0,
    1, 206,   0,
    3, 140,   0,
    7,  28,   0,
   14,  28,   0,
   28,  28,   0,
   56,  24,   0,
  127, 255, 128,
  255, 255, 192,
  255, 255, 128,
    0,  48,   0,
    0, 112,   0,
    0, 112,   0,
    0, 112,   0,
    0,  96,   0,
    0, 224,   0,
    0, 224,   0,
    0,  64,   0,
};
static Character character_52 = {
  20, // width
  25, // height
  3, // bytes per line
  13, // height offset
  52, // unicode id
  character_data_52, // data
};

// Character: 5 unicode: 53
static char character_data_53[] = {
    0, 255, 252,
    1, 255, 252,
    1, 255, 252,
    3, 128,   0,
    3, 128,   0,
    7,   0,   0,
    7,   0,   0,
    6, 124,   0,
   15, 255,   0,
   15, 255, 128,
   31, 131, 192,
   30,   1, 192,
   28,   0, 192,
   16,   0, 192,
    0,   0, 192,
    0,   0, 192,
    0,   1, 192,
    0,   1, 192,
    0,   3, 128,
   96,   7, 128,
  112,  15,   0,
  120,  62,   0,
   63, 252,   0,
   31, 248,   0,
    7, 224,   0,
};
static Character character_53 = {
  23, // width
  25, // height
  3, // bytes per line
  13, // height offset
  53, // unicode id
  character_data_53, // data
};

// Character: 6 unicode: 54
static char character_data_54[] = {
    0,   0, 124,
    0,   3, 254,
    0,  15, 252,
    0,  31, 128,
    0, 124,   0,
    0, 240,   0,
    1, 224,   0,
    3, 254,   0,
    7, 255,   0,
   15, 255, 128,
   15, 131, 192,
   30,   0, 224,
   28,   0, 224,
   56,   0, 224,
   48,   0, 224,
  112,   0, 224,
  112,   0, 224,
  112,   1, 192,
  112,   1, 192,
  112,   3, 128,
  112,   7, 128,
   60,  31,   0,
   63, 254,   0,
   31, 248,   0,
    7, 224,   0,
};
static Character character_54 = {
  23, // width
  25, // height
  3, // bytes per line
  9, // height offset
  54, // unicode id
  character_data_54, // data
};

// Character: 7 unicode: 55
static char character_data_55[] = {
    7, 255, 252,
   15, 255, 252,
    7, 255, 248,
    0,   0, 112,
    0,   0, 112,
    0,   0, 224,
    0,   1, 192,
    0,   3, 128,
    0,   7,   0,
    0,   7,   0,
    0,  14,   0,
    0,  28,   0,
    0,  56,   0,
    0, 112,   0,
    0, 240,   0,
    0, 224,   0,
    1, 192,   0,
    3, 128,   0,
    7,   0,   0,
   15,   0,   0,
   30,   0,   0,
   28,   0,   0,
   56,   0,   0,
  112,   0,   0,
   96,   0,   0,
};
static Character character_55 = {
  22, // width
  25, // height
  3, // bytes per line
  13, // height offset
  55, // unicode id
  character_data_55, // data
};

// Character: 8 unicode: 56
static char character_data_56[] = {
    0,  31,   0,
    0,  63, 192,
    0, 255, 192,
    0, 240, 224,
    1, 192, 224,
    1, 192,  96,
    3, 128, 224,
    3, 128, 224,
    3, 129, 192,
    1, 199, 128,
    1, 255,   0,
    1, 255,   0,
    7, 255,   0,
   15, 131, 128,
   30,   3, 128,
   28,   1, 128,
   56,   1, 128,
   56,   1, 128,
   56,   3, 128,
   56,   7, 128,
   56,  15,   0,
   60,  30,   0,
   31, 252,   0,
   15, 248,   0,
    7, 224,   0,
};
static Character character_56 = {
  20, // width
  25, // height
  3, // bytes per line
  9, // height offset
  56, // unicode id
  character_data_56, // data
};

// Character: 9 unicode: 57
static char character_data_57[] = {
    0,  15, 192,
    0,  63, 240,
    0, 255, 248,
    1, 240, 120,
    3, 192,  28,
    7, 128,  28,
    7,   0,  28,
    6,   0,  28,
   14,   0,  28,
   14,   0,  28,
   14,   0,  56,
   14,   0, 120,
   14,   0, 240,
    7, 131, 240,
    7, 255, 224,
    3, 255, 224,
    0, 255, 192,
    0,   7, 128,
    0,  15,   0,
    0,  62,   0,
    0, 252,   0,
    3, 240,   0,
  127, 224,   0,
  255, 128,   0,
  124,   0,   0,
};
static Character character_57 = {
  23, // width
  25, // height
  3, // bytes per line
  13, // height offset
  57, // unicode id
  character_data_57, // data
};

// Character: : unicode: 58
static char character_data_58[] = {
    0,  24,
    0,  60,
    0,  60,
    0,  24,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    1, 128,
    3, 192,
    3, 192,
    1, 128,
};
static Character character_58 = {
  20, // width
  18, // height
  2, // bytes per line
  16, // height offset
  58, // unicode id
  character_data_58, // data
};

// Character: ; unicode: 59
static char character_data_59[] = {
    0,  12,
    0,  28,
    0,  28,
    0,  28,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    0,   0,
    0, 192,
    1, 192,
    1, 128,
    3, 128,
    7,   0,
   14,   0,
   12,   0,
};
static Character character_59 = {
  20, // width
  23, // height
  2, // bytes per line
  16, // height offset
  59, // unicode id
  character_data_59, // data
};

// Character: A unicode: 65
static char character_data_65[] = {
    0,   3,   0,
    0,   3,   0,
    0,   7,   0,
    0,  15,   0,
    0,  15,   0,
    0,  31, 128,
    0,  27, 128,
    0,  59, 128,
    0, 115, 128,
    0,  99, 128,
    0, 227, 128,
    1, 195, 128,
    1, 129, 128,
    3, 129, 128,
    3, 255, 128,
    7, 255, 128,
   15, 255, 128,
   12,   1, 128,
   28,   1, 128,
   24,   1, 128,
   56,   1, 192,
  112,   1, 192,
  112,   1, 192,
  224,   1, 192,
   96,   0, 128,
};
static Character character_65 = {
  21, // width
  25, // height
  3, // bytes per line
  9, // height offset
  65, // unicode id
  character_data_65, // data
};

// Character: B unicode: 66
static char character_data_66[] = {
    1, 255, 192,
    1, 255, 224,
    1, 255, 240,
    3, 128, 112,
    3, 128,  48,
    3,   0,  48,
    7,   0,  48,
    7,   0, 112,
    7,   0, 224,
    6,   1, 224,
   15, 255, 192,
   15, 255, 128,
   15, 255, 192,
   12,   1, 192,
   28,   0, 192,
   28,   0, 224,
   24,   0, 192,
   24,   0, 192,
   56,   1, 192,
   56,   1, 192,
   48,   3, 128,
  112,  15,   0,
  127, 254,   0,
  127, 252,   0,
  127, 240,   0,
};
static Character character_66 = {
  21, // width
  25, // height
  3, // bytes per line
  9, // height offset
  66, // unicode id
  character_data_66, // data
};

// Character: C unicode: 67
static char character_data_67[] = {
    0,  15, 192,
    0,  63, 240,
    0, 127, 248,
    1, 240,  56,
    1, 224,  28,
    3, 128,   8,
    7,   0,   0,
   14,   0,   0,
   14,   0,   0,
   28,   0,   0,
   28,   0,   0,
   24,   0,   0,
   56,   0,   0,
   56,   0,   0,
   48,   0,   0,
   48,   0,   0,
   48,   0,   0,
   48,   0,   0,
   56,   0,   0,
   56,   0, 128,
   28,   3, 192,
   30,  15, 128,
   15, 255,   0,
    7, 252,   0,
    1, 240,   0,
};
static Character character_67 = {
  22, // width
  25, // height
  3, // bytes per line
  9, // height offset
  67, // unicode id
  character_data_67, // data
};

// Character: D unicode: 68
static char character_data_68[] = {
    1, 252,   0,
    1, 255,   0,
    1, 255, 128,
    3, 135, 192,
    3, 129, 224,
    3,   0, 224,
    7,   0, 112,
    7,   0, 112,
    7,   0,  48,
    6,   0,  48,
   14,   0,  48,
   14,   0, 112,
   12,   0, 112,
   12,   0, 112,
   28,   0, 224,
   28,   0, 224,
   24,   1, 192,
   24,   3, 192,
   56,   7, 128,
   56,  15,   0,
   48,  62,   0,
  112, 252,   0,
  127, 240,   0,
  127, 224,   0,
  127,   0,   0,
};
static Character character_68 = {
  21, // width
  25, // height
  3, // bytes per line
  9, // height offset
  68, // unicode id
  character_data_68, // data
};

// Character: E unicode: 69
static char character_data_69[] = {
    1, 255, 252,
    1, 255, 254,
    1, 255, 252,
    3, 128,   0,
    3, 128,   0,
    3,   0,   0,
    7,   0,   0,
    7,   0,   0,
    7,   0,   0,
    6,   0,   0,
   14,   0,   0,
   15, 255, 224,
   15, 255, 240,
   15, 255, 224,
   28,   0,   0,
   28,   0,   0,
   24,   0,   0,
   24,   0,   0,
   56,   0,   0,
   56,   0,   0,
   48,   0,   0,
   48,   0,   0,
  127, 255,   0,
  127, 255, 128,
  127, 255,   0,
};
static Character character_69 = {
  23, // width
  25, // height
  3, // bytes per line
  9, // height offset
  69, // unicode id
  character_data_69, // data
};

// Character: F unicode: 70
static char character_data_70[] = {
    1, 255, 252,
    1, 255, 254,
    1, 255, 252,
    3, 128,   0,
    3, 128,   0,
    3,   0,   0,
    7,   0,   0,
    7,   0,   0,
    7,   0,   0,
    6,   0,   0,
   14,   0,   0,
   15, 255, 224,
   15, 255, 240,
   15, 255, 224,
   28,   0,   0,
   28,   0,   0,
   24,   0,   0,
   24,   0,   0,
   56,   0,   0,
   56,   0,   0,
   48,   0,   0,
  112,   0,   0,
  112,   0,   0,
  112,   0,   0,
   96,   0,   0,
};
static Character character_70 = {
  23, // width
  25, // height
  3, // bytes per line
  9, // height offset
  70, // unicode id
  character_data_70, // data
};

// Character: G unicode: 71
static char character_data_71[] = {
    0,  15, 128,
    0,  63, 224,
    0, 255, 240,
    1, 240, 120,
    3, 192,  56,
    3, 128,  24,
    7,   0,   0,
   14,   0,   0,
   14,   0,   0,
   28,   0,   0,
   28,   0,   0,
   24,   0,  64,
   56,   0, 224,
   56,   0, 224,
   48,   0, 192,
   48,   0, 192,
   48,   1, 192,
   48,   1, 192,
   56,   1, 128,
   56,   3, 128,
   56,   7, 128,
   30,  31,   0,
   31, 254,   0,
   15, 252,   0,
    3, 224,   0,
};
static Character character_71 = {
  22, // width
  25, // height
  3, // bytes per line
  9, // height offset
  71, // unicode id
  character_data_71, // data
};

// Character: H unicode: 72
static char character_data_72[] = {
    1, 128,  24,
    1, 128,  56,
    1, 128,  56,
    3, 128,  56,
    3, 128,  48,
    3,   0, 112,
    7,   0, 112,
    7,   0,  96,
    6,   0,  96,
    6,   0, 224,
   14,   0, 224,
   15, 255, 192,
   15, 255, 192,
   15, 255, 192,
   28,   1, 192,
   28,   1, 128,
   24,   1, 128,
   24,   3, 128,
   56,   3, 128,
   56,   3,   0,
   48,   7,   0,
  112,   7,   0,
  112,   6,   0,
  112,   6,   0,
   96,   6,   0,
};
static Character character_72 = {
  22, // width
  25, // height
  3, // bytes per line
  9, // height offset
  72, // unicode id
  character_data_72, // data
};

// Character: I unicode: 73
static char character_data_73[] = {
    0, 255, 240,
    0, 255, 240,
    0, 255, 240,
    0,  14,   0,
    0,  14,   0,
    0,  12,   0,
    0,  28,   0,
    0,  28,   0,
    0,  24,   0,
    0,  24,   0,
    0,  56,   0,
    0,  56,   0,
    0,  48,   0,
    0, 112,   0,
    0, 112,   0,
    0,  96,   0,
    0,  96,   0,
    0, 224,   0,
    0, 224,   0,
    0, 192,   0,
    1, 192,   0,
    1, 192,   0,
   63, 252,   0,
   63, 252,   0,
   63, 252,   0,
};
static Character character_73 = {
  21, // width
  25, // height
  3, // bytes per line
  9, // height offset
  73, // unicode id
  character_data_73, // data
};

// Character: K unicode: 75
static char character_data_75[] = {
    1, 128,  12,
    1, 128,  30,
    1, 128,  60,
    3, 128, 120,
    3, 128, 240,
    3,   3, 224,
    7,   7, 128,
    7,  15,   0,
    7,  30,   0,
    6, 124,   0,
   14, 248,   0,
   15, 224,   0,
   15, 192,   0,
   13, 192,   0,
   28, 192,   0,
   28, 224,   0,
   24, 112,   0,
   24,  56,   0,
   56,  56,   0,
   56,  28,   0,
   48,  14,   0,
  112,  15,   0,
  112,   7,   0,
  112,   3, 128,
   96,   1,   0,
};
static Character character_75 = {
  23, // width
  25, // height
  3, // bytes per line
  9, // height offset
  75, // unicode id
  character_data_75, // data
};

// Character: L unicode: 76
static char character_data_76[] = {
    1, 128,   0,
    1, 128,   0,
    1, 128,   0,
    3, 128,   0,
    3, 128,   0,
    3,   0,   0,
    7,   0,   0,
    7,   0,   0,
    6,   0,   0,
    6,   0,   0,
   14,   0,   0,
   14,   0,   0,
   12,   0,   0,
   12,   0,   0,
   28,   0,   0,
   28,   0,   0,
   24,   0,   0,
   24,   0,   0,
   56,   0,   0,
   48,   0,   0,
   48,   0,   0,
  112,   0,   0,
  127, 255,   0,
  127, 255, 128,
  127, 255,   0,
};
static Character character_76 = {
  20, // width
  25, // height
  3, // bytes per line
  9, // height offset
  76, // unicode id
  character_data_76, // data
};

// Character: M unicode: 77
static char character_data_77[] = {
    0,  48,  24,
    0, 112,  56,
    0, 112, 120,
    0, 240, 112,
    0, 240, 240,
    1, 240, 240,
    1, 241, 240,
    1, 241, 240,
    3, 243, 240,
    3, 243, 240,
    7, 119, 240,
    7, 119,  96,
    6, 126,  96,
   14, 126,  96,
   14, 124,  96,
   28, 124, 224,
   28, 120, 224,
   24, 120, 224,
   56, 112, 192,
   56,  96, 192,
  112,   0, 192,
  112,   0, 192,
   96,   1, 192,
  224,   1, 192,
   64,   0, 128,
};
static Character character_77 = {
  21, // width
  25, // height
  3, // bytes per line
  9, // height offset
  77, // unicode id
  character_data_77, // data
};

// Character: N unicode: 78
static char character_data_78[] = {
    1, 128,  24,
    1, 192,  56,
    1, 192,  56,
    3, 192,  56,
    3, 192,  48,
    3, 224, 112,
    7, 224, 112,
    7, 224,  96,
    7,  96,  96,
    6, 112, 224,
   14, 112, 224,
   14, 112, 192,
   12,  49, 192,
   12,  57, 192,
   28,  57, 192,
   28,  57, 128,
   24,  27, 128,
   24,  31, 128,
   56,  31, 128,
   56,  31,   0,
   48,  15,   0,
  112,  15,   0,
  112,  14,   0,
  112,  14,   0,
   96,   6,   0,
};
static Character character_78 = {
  22, // width
  25, // height
  3, // bytes per line
  9, // height offset
  78, // unicode id
  character_data_78, // data
};

// Character: O unicode: 79
static char character_data_79[] = {
    0,  31, 128,
    0, 127, 192,
    0, 255, 224,
    1, 240, 224,
    3, 192, 112,
    7, 128, 112,
    7,   0,  48,
   14,   0,  48,
   14,   0,  48,
   28,   0,  48,
   28,   0,  48,
   24,   0, 112,
   56,   0, 112,
   56,   0,  96,
   48,   0, 224,
   48,   0, 224,
   48,   1, 192,
   48,   1, 192,
   48,   3, 128,
   56,   7, 128,
   56,  15,   0,
   28,  62,   0,
   31, 252,   0,
   15, 248,   0,
    7, 224,   0,
};
static Character character_79 = {
  21, // width
  25, // height
  3, // bytes per line
  9, // height offset
  79, // unicode id
  character_data_79, // data
};

// Character: P unicode: 80
static char character_data_80[] = {
    1, 255, 192,
    1, 255, 240,
    1, 255, 240,
    3, 128, 120,
    3, 128,  56,
    3,   0,  24,
    7,   0,  24,
    7,   0,  56,
    7,   0,  56,
    6,   0, 112,
   14,   0, 240,
   14,   3, 224,
   15, 255, 192,
   15, 255, 128,
   31, 254,   0,
   28,   0,   0,
   24,   0,   0,
   24,   0,   0,
   56,   0,   0,
   56,   0,   0,
   48,   0,   0,
  112,   0,   0,
  112,   0,   0,
  112,   0,   0,
   96,   0,   0,
};
static Character character_80 = {
  22, // width
  25, // height
  3, // bytes per line
  9, // height offset
  80, // unicode id
  character_data_80, // data
};

// Character: Q unicode: 81
static char character_data_81[] = {
    0,  31, 128,
    0, 127, 192,
    0, 255, 224,
    1, 240, 224,
    3, 192, 112,
    7, 128, 112,
    7,   0,  48,
   14,   0,  48,
   14,   0,  48,
   28,   0,  48,
   28,   0,  48,
   24,   0,  48,
   56,   0, 112,
   56,   0,  96,
   48,   0,  96,
   48,   0, 224,
   48,   0, 192,
   48,   1, 192,
   48,   3, 128,
   56, 199, 128,
   56, 207,   0,
   61, 222,   0,
   31, 252,   0,
   15, 248,   0,
    7, 224,   0,
    1, 192,   0,
    1, 192,   0,
    0, 192,   0,
    0, 224,   0,
    0, 240,   0,
    0, 124,   0,
    0,  62,   0,
    0,  28,   0,
};
static Character character_81 = {
  21, // width
  33, // height
  3, // bytes per line
  9, // height offset
  81, // unicode id
  character_data_81, // data
};

// Character: R unicode: 82
static char character_data_82[] = {
    1, 255, 192,
    1, 255, 224,
    1, 255, 240,
    3, 128, 120,
    3, 128,  56,
    3,   0,  24,
    7,   0,  24,
    7,   0,  56,
    7,   0,  56,
    6,   0, 112,
   14,   0, 240,
   14,   3, 224,
   15, 255, 192,
   13, 255, 128,
   29, 254,   0,
   28, 224,   0,
   24, 112,   0,
   24, 120,   0,
   56,  56,   0,
   56,  28,   0,
   48,  14,   0,
  112,  15,   0,
  112,   7,   0,
  112,   3, 128,
   96,   1,   0,
};
static Character character_82 = {
  22, // width
  25, // height
  3, // bytes per line
  9, // height offset
  82, // unicode id
  character_data_82, // data
};

// Character: S unicode: 83
static char character_data_83[] = {
    0,  63,   0,
    0, 255, 192,
    1, 255, 224,
    3, 224, 240,
    7, 128,  96,
    7,   0,   0,
   14,   0,   0,
   14,   0,   0,
   14,   0,   0,
    7,   0,   0,
    7, 252,   0,
    3, 255,   0,
    0, 255, 128,
    0,   3, 192,
    0,   1, 192,
    0,   0, 224,
    0,   0, 224,
    0,   0, 192,
    0,   1, 192,
   64,   3, 192,
  224,   7, 128,
  240,  31,   0,
  127, 254,   0,
   63, 248,   0,
   15, 224,   0,
};
static Character character_83 = {
  20, // width
  25, // height
  3, // bytes per line
  9, // height offset
  83, // unicode id
  character_data_83, // data
};

// Character: T unicode: 84
static char character_data_84[] = {
    3, 255, 252,
    7, 255, 254,
    3, 255, 252,
    0,  14,   0,
    0,  14,   0,
    0,  12,   0,
    0,  28,   0,
    0,  28,   0,
    0,  24,   0,
    0,  24,   0,
    0,  56,   0,
    0,  56,   0,
    0,  48,   0,
    0,  48,   0,
    0, 112,   0,
    0, 112,   0,
    0,  96,   0,
    0, 224,   0,
    0, 224,   0,
    0, 192,   0,
    0, 192,   0,
    1, 192,   0,
    1, 192,   0,
    1, 128,   0,
    1, 128,   0,
};
static Character character_84 = {
  23, // width
  25, // height
  3, // bytes per line
  9, // height offset
  84, // unicode id
  character_data_84, // data
};

// Character: V unicode: 86
static char character_data_86[] = {
    2,   0,  12,
    7,   0,  14,
    7,   0,  28,
    7,   0,  28,
    7,   0,  56,
    3,   0, 112,
    3,   0, 112,
    3,   0, 224,
    3,   0, 224,
    3,   1, 192,
    3,   3, 128,
    3,   3, 128,
    3, 135,   0,
    3, 143,   0,
    3, 142,   0,
    3, 156,   0,
    3, 156,   0,
    3, 184,   0,
    3, 248,   0,
    3, 240,   0,
    1, 224,   0,
    1, 224,   0,
    1, 192,   0,
    1, 128,   0,
    1, 128,   0,
};
static Character character_86 = {
  23, // width
  25, // height
  3, // bytes per line
  9, // height offset
  86, // unicode id
  character_data_86, // data
};

// Character: W unicode: 87
static char character_data_87[] = {
    2,   0,  12,
    7,   0,  14,
    7,   0,  12,
    7,   0,  28,
    6,   0,  24,
    6,   0,  56,
    6,   0,  56,
    6,  24, 112,
    6,  24, 112,
   14,  56,  96,
   14,  56, 224,
   14, 120, 192,
   14, 249, 192,
   12, 249, 192,
   13, 251, 128,
   15, 219, 128,
   15, 159,   0,
   15, 159,   0,
   15,  30,   0,
   31,  30,   0,
   30,  30,   0,
   30,  28,   0,
   28,  28,   0,
   28,  56,   0,
   24,  24,   0,
};
static Character character_87 = {
  23, // width
  25, // height
  3, // bytes per line
  9, // height offset
  87, // unicode id
  character_data_87, // data
};

// Character: X unicode: 88
static char character_data_88[] = {
    1,   0,   2,
    3, 128,   7,
    1, 128,  14,
    1, 192,  28,
    1, 192,  56,
    0, 224, 112,
    0, 224, 224,
    0,  97, 224,
    0, 115, 192,
    0, 119, 128,
    0,  63,   0,
    0,  62,   0,
    0,  60,   0,
    0, 124,   0,
    0, 252,   0,
    1, 238,   0,
    1, 206,   0,
    3, 134,   0,
    7,   7,   0,
   14,   7,   0,
   30,   3, 128,
   60,   3, 128,
  120,   1, 128,
  240,   1, 192,
   96,   0, 128,
};
static Character character_88 = {
  24, // width
  25, // height
  3, // bytes per line
  9, // height offset
  88, // unicode id
  character_data_88, // data
};

// Character: Y unicode: 89
static char character_data_89[] = {
    2,   0,   4,
    7,   0,  14,
    3,   0,  28,
    3, 128,  56,
    3, 128, 120,
    1, 192, 240,
    1, 193, 224,
    0, 195, 192,
    0, 231, 128,
    0, 255,   0,
    0, 126,   0,
    0, 124,   0,
    0,  56,   0,
    0, 112,   0,
    0, 112,   0,
    0, 112,   0,
    0,  96,   0,
    0, 224,   0,
    0, 224,   0,
    0, 192,   0,
    0, 192,   0,
    1, 192,   0,
    1, 192,   0,
    1, 128,   0,
    1, 128,   0,
};
static Character character_89 = {
  23, // width
  25, // height
  3, // bytes per line
  9, // height offset
  89, // unicode id
  character_data_89, // data
};

// Character: Z unicode: 90
static char character_data_90[] = {
    1, 255, 255,
    3, 255, 255,
    1, 255, 254,
    0,   0,  28,
    0,   0,  56,
    0,   0, 112,
    0,   0, 224,
    0,   1, 192,
    0,   3, 128,
    0,   7,   0,
    0,  14,   0,
    0,  28,   0,
    0,  24,   0,
    0,  48,   0,
    0, 112,   0,
    0, 224,   0,
    1, 192,   0,
    3, 128,   0,
    7,   0,   0,
   14,   0,   0,
   28,   0,   0,
   56,   0,   0,
  127, 255, 128,
  255, 255, 192,
  255, 255, 128,
};
static Character character_90 = {
  24, // width
  25, // height
  3, // bytes per line
  9, // height offset
  90, // unicode id
  character_data_90, // data
};

// Character: a unicode: 97
static char character_data_97[] = {
    0,  63,   0,
    1, 255, 192,
    3, 255, 224,
    7, 193, 224,
   15,   0, 192,
   30,   0, 192,
   60,   1, 192,
   56,   1, 192,
  112,   1, 128,
  112,   3, 128,
   96,   3, 128,
   96,   3,   0,
   96,   7,   0,
  112,  15,   0,
  120,  63,   0,
   63, 254,   0,
   31, 254,   0,
    7, 198,   0,
};
static Character character_97 = {
  20, // width
  18, // height
  3, // bytes per line
  16, // height offset
  97, // unicode id
  character_data_97, // data
};

// Character: b unicode: 98
static char character_data_98[] = {
    1, 128,   0,
    1, 128,   0,
    1, 128,   0,
    3, 128,   0,
    3, 128,   0,
    3,   0,   0,
    7,   0,   0,
    7,  62,   0,
    7, 127, 128,
    7, 255, 192,
   15, 193, 224,
   15, 128, 224,
   14,   0,  96,
   14,   0,  96,
   28,   0,  96,
   28,   0, 224,
   24,   0, 224,
   24,   1, 192,
   56,   3, 192,
   56,   7, 128,
   56,  15,   0,
   56,  62,   0,
   31, 252,   0,
   31, 248,   0,
    7, 192,   0,
};
static Character character_98 = {
  20, // width
  25, // height
  3, // bytes per line
  9, // height offset
  98, // unicode id
  character_data_98, // data
};

// Character: c unicode: 99
static char character_data_99[] = {
    0,  63,   0,
    1, 255, 192,
    3, 255, 224,
    7, 192, 240,
   15,   0,  48,
   28,   0,   0,
   56,   0,   0,
   56,   0,   0,
  112,   0,   0,
  112,   0,   0,
  112,   0,   0,
  112,   0,   0,
  112,   0,   0,
   56,   1, 128,
   60,   7, 128,
   31, 255, 128,
   15, 254,   0,
    3, 248,   0,
};
static Character character_99 = {
  21, // width
  18, // height
  3, // bytes per line
  16, // height offset
  99, // unicode id
  character_data_99, // data
};

// Character: d unicode: 100
static char character_data_100[] = {
    0,   0,  24,
    0,   0,  56,
    0,   0,  56,
    0,   0,  56,
    0,   0,  48,
    0,   0, 112,
    0,   0, 112,
    0,  62,  96,
    1, 255, 224,
    3, 255, 224,
    7, 193, 224,
   15,   0, 192,
   30,   0, 192,
   60,   1, 192,
   56,   1, 192,
  112,   1, 128,
  112,   3, 128,
   96,   3, 128,
   96,   3, 128,
   96,   7,   0,
  112,  15,   0,
  120,  63,   0,
   63, 254,   0,
   31, 254,   0,
    7, 198,   0,
};
static Character character_100 = {
  22, // width
  25, // height
  3, // bytes per line
  9, // height offset
  100, // unicode id
  character_data_100, // data
};

// Character: e unicode: 101
static char character_data_101[] = {
    0,  31, 128,
    0, 255, 224,
    3, 255, 240,
    7, 224, 112,
   15, 128, 112,
   30,   0, 112,
   56,   1, 224,
   48,   7, 192,
  112,  63, 128,
  113, 254,   0,
  119, 248,   0,
  127, 192,   0,
  127,   0,   0,
   56,   0,   0,
   62,   0,   0,
   31, 255, 128,
    7, 255, 128,
    1, 254,   0,
};
static Character character_101 = {
  20, // width
  18, // height
  3, // bytes per line
  16, // height offset
  101, // unicode id
  character_data_101, // data
};

// Character: f unicode: 102
static char character_data_102[] = {
    0,   3, 224,
    0,  15, 248,
    0,  63, 248,
    0, 124,  28,
    0, 240,  12,
    0, 224,   0,
    1, 192,   0,
   15, 255, 128,
   31, 255, 128,
   15, 255, 128,
    1, 128,   0,
    3, 128,   0,
    3, 128,   0,
    3,   0,   0,
    7,   0,   0,
    7,   0,   0,
    6,   0,   0,
    6,   0,   0,
   14,   0,   0,
   14,   0,   0,
   12,   0,   0,
   12,   0,   0,
   28,   0,   0,
   28,   0,   0,
   24,   0,   0,
   24,   0,   0,
   56,   0,   0,
   56,   0,   0,
   48,   0,   0,
   48,   0,   0,
  112,   0,   0,
   96,   0,   0,
   96,   0,   0,
};
static Character character_102 = {
  23, // width
  33, // height
  3, // bytes per line
  9, // height offset
  102, // unicode id
  character_data_102, // data
};

// Character: g unicode: 103
static char character_data_103[] = {
    0,  31, 252,
    0, 127, 254,
    0, 255, 252,
    1, 224, 240,
    3, 192, 112,
    3, 128, 112,
    7,   0, 112,
    7,   0, 112,
    7,   0, 224,
    3, 131, 224,
    3, 255, 192,
    1, 255, 128,
    0, 127, 128,
    0,   3, 128,
    0,   1, 192,
    0,   0, 192,
    0,   0, 224,
   96,   0, 224,
   96,   0, 192,
   96,   1, 192,
   96,   3, 192,
  112,   7, 128,
  124,  31,   0,
   63, 254,   0,
   31, 252,   0,
    7, 224,   0,
};
static Character character_103 = {
  23, // width
  26, // height
  3, // bytes per line
  16, // height offset
  103, // unicode id
  character_data_103, // data
};

// Character: h unicode: 104
static char character_data_104[] = {
    1, 128,   0,
    1, 128,   0,
    1, 128,   0,
    3, 128,   0,
    3, 128,   0,
    3,   0,   0,
    7,   0,   0,
    7,  62,   0,
    7, 255,   0,
    7, 255, 128,
   15, 195, 192,
   15,   1, 192,
   14,   0, 192,
   14,   0, 192,
   28,   0, 192,
   28,   0, 192,
   24,   1, 192,
   24,   1, 192,
   56,   1, 128,
   56,   3, 128,
   48,   3, 128,
  112,   3, 128,
  112,   3,   0,
  112,   7,   0,
   96,   3,   0,
};
static Character character_104 = {
  20, // width
  25, // height
  3, // bytes per line
  9, // height offset
  104, // unicode id
  character_data_104, // data
};

// Character: i unicode: 105
static char character_data_105[] = {
    0,   6,
    0,  15,
    0,  15,
    0,   6,
    0,   0,
    0,   0,
    0,   0,
    3, 248,
    3, 248,
    3, 248,
    0,  56,
    0,  48,
    0,  48,
    0, 112,
    0, 112,
    0,  96,
    0,  96,
    0, 224,
    0, 224,
    0, 192,
    0, 224,
    0, 224,
    0, 124,
    0, 124,
    0,  28,
};
static Character character_105 = {
  20, // width
  25, // height
  2, // bytes per line
  9, // height offset
  105, // unicode id
  character_data_105, // data
};

// Character: j unicode: 106
static char character_data_106[] = {
    0,   0,   3,   0,
    0,   0,   7, 128,
    0,   0,   7,   0,
    0,   0,   7,   0,
    0,   0,   0,   0,
    0,   0,   0,   0,
    0,   0,   0,   0,
    0,   1, 252,   0,
    0,   1, 252,   0,
    0,   1, 252,   0,
    0,   0,  28,   0,
    0,   0,  24,   0,
    0,   0,  24,   0,
    0,   0,  56,   0,
    0,   0,  56,   0,
    0,   0,  48,   0,
    0,   0, 112,   0,
    0,   0, 112,   0,
    0,   0,  96,   0,
    0,   0,  96,   0,
    0,   0, 224,   0,
    0,   0, 224,   0,
    0,   0, 192,   0,
    0,   0, 192,   0,
    0,   1, 192,   0,
    0,   1, 192,   0,
    0,   3, 128,   0,
   32,   7, 128,   0,
  112,  15,   0,   0,
  120,  62,   0,   0,
   63, 252,   0,   0,
   31, 240,   0,   0,
    7, 192,   0,   0,
};
static Character character_106 = {
  25, // width
  33, // height
  4, // bytes per line
  9, // height offset
  106, // unicode id
  character_data_106, // data
};

// Character: k unicode: 107
static char character_data_107[] = {
    1, 128,   0,
    1, 128,   0,
    1, 128,   0,
    3, 128,   0,
    3, 128,   0,
    3,   0,   0,
    7,   0,   0,
    7,   0,  48,
    7,   0, 120,
    6,   1, 240,
   14,   7, 224,
   14,  15, 128,
   12,  62,   0,
   12, 252,   0,
   31, 240,   0,
   31, 192,   0,
   31, 128,   0,
   27, 192,   0,
   57, 240,   0,
   56, 120,   0,
   48,  60,   0,
  112,  30,   0,
  112,  15,   0,
  112,   7, 128,
   96,   3,   0,
};
static Character character_107 = {
  21, // width
  25, // height
  3, // bytes per line
  9, // height offset
  107, // unicode id
  character_data_107, // data
};

// Character: l unicode: 108
static char character_data_108[] = {
    0,  96,   0,
    0,  96,   0,
    0,  96,   0,
    0, 224,   0,
    0, 224,   0,
    0, 192,   0,
    0, 192,   0,
    1, 192,   0,
    1, 192,   0,
    1, 128,   0,
    1, 128,   0,
    3, 128,   0,
    3, 128,   0,
    3,   0,   0,
    7,   0,   0,
    7,   0,   0,
    6,   0,   0,
    6,   0,   0,
   14,   0,   0,
   14,   0,   0,
    6,   1, 128,
    7,   7, 128,
    7, 255, 128,
    3, 254,   0,
    0, 248,   0,
};
static Character character_108 = {
  20, // width
  25, // height
  3, // bytes per line
  9, // height offset
  108, // unicode id
  character_data_108, // data
};

// Character: m unicode: 109
static char character_data_109[] = {
    4, 225, 224,
   15, 247, 240,
   15, 255, 248,
   15,  30,  56,
   28,  28,  56,
   28,  24,  56,
   28,  56,  56,
   24,  56,  48,
   56,  48, 112,
   56,  48, 112,
   48, 112,  96,
   48, 112,  96,
  112,  96, 224,
  112,  96, 224,
   96, 224, 192,
   96, 224, 192,
  224, 193, 192,
   64, 192, 128,
};
static Character character_109 = {
  21, // width
  18, // height
  3, // bytes per line
  16, // height offset
  109, // unicode id
  character_data_109, // data
};

// Character: n unicode: 110
static char character_data_110[] = {
    6,  62,   0,
    6, 255,   0,
    7, 255, 128,
   15, 195, 192,
   15,   1, 192,
   14,   0, 192,
   14,   0, 192,
   28,   0, 192,
   28,   0, 192,
   24,   1, 192,
   24,   1, 192,
   56,   1, 128,
   56,   3, 128,
   48,   3, 128,
  112,   3, 128,
  112,   3,   0,
  112,   7,   0,
   96,   3,   0,
};
static Character character_110 = {
  20, // width
  18, // height
  3, // bytes per line
  16, // height offset
  110, // unicode id
  character_data_110, // data
};

// Character: o unicode: 111
static char character_data_111[] = {
    0, 126,   0,
    1, 255,   0,
    7, 255, 128,
   15, 131, 192,
   30,   0, 224,
   28,   0, 224,
   56,   0, 224,
   48,   0, 224,
  112,   0, 224,
  112,   0, 224,
  112,   1, 192,
  112,   1, 192,
  112,   3, 128,
  112,   7, 128,
   60,  31,   0,
   63, 254,   0,
   31, 248,   0,
    7, 224,   0,
};
static Character character_111 = {
  20, // width
  18, // height
  3, // bytes per line
  16, // height offset
  111, // unicode id
  character_data_111, // data
};

// Character: p unicode: 112
static char character_data_112[] = {
    1, 143, 128,
    1, 191, 224,
    1, 255, 240,
    3, 240, 120,
    3, 224,  56,
    3, 192,  24,
    3, 128,  24,
    7,   0,  24,
    7,   0,  56,
    6,   0,  56,
    6,   0, 112,
   14,   0, 240,
   14,   1, 224,
   12,   3, 192,
   12,  15, 128,
   31, 255,   0,
   31, 254,   0,
   27, 240,   0,
   24,   0,   0,
   56,   0,   0,
   48,   0,   0,
   48,   0,   0,
  112,   0,   0,
  112,   0,   0,
   96,   0,   0,
   96,   0,   0,
};
static Character character_112 = {
  22, // width
  26, // height
  3, // bytes per line
  16, // height offset
  112, // unicode id
  character_data_112, // data
};

// Character: q unicode: 113
static char character_data_113[] = {
    0,  63,   0,
    1, 255, 192,
    3, 255, 224,
    7, 193, 224,
   15,   0, 192,
   30,   0, 192,
   60,   1, 192,
   56,   1, 192,
  112,   1, 128,
  112,   3, 128,
   96,   3, 128,
   96,   3,   0,
   96,   7,   0,
  112,  15,   0,
  120,  63,   0,
   63, 254,   0,
   31, 254,   0,
    7, 206,   0,
    0,  14,   0,
    0,  12,   0,
    0,  12,   0,
    0,  28,   0,
    0,  28,   0,
    0,  24,   0,
    0,  24,   0,
    0,  24,   0,
};
static Character character_113 = {
  20, // width
  26, // height
  3, // bytes per line
  16, // height offset
  113, // unicode id
  character_data_113, // data
};

// Character: r unicode: 114
static char character_data_114[] = {
    6,  31,   0,
    6, 127, 192,
    7, 255, 224,
   15, 224, 240,
   15, 128, 112,
   15,   0,  32,
   14,   0,   0,
   28,   0,   0,
   28,   0,   0,
   24,   0,   0,
   24,   0,   0,
   56,   0,   0,
   56,   0,   0,
   48,   0,   0,
  112,   0,   0,
  112,   0,   0,
  112,   0,   0,
   96,   0,   0,
};
static Character character_114 = {
  21, // width
  18, // height
  3, // bytes per line
  16, // height offset
  114, // unicode id
  character_data_114, // data
};

// Character: s unicode: 115
static char character_data_115[] = {
    0, 124,   0,
    1, 255,   0,
    3, 255,   0,
    7, 131,   0,
    7,   0,   0,
    6,   0,   0,
    7,   0,   0,
    7, 248,   0,
    3, 254,   0,
    1, 255,   0,
    0,   7, 128,
    0,   3, 128,
    0,   3, 128,
  112,   7,   0,
  120,  31,   0,
   63, 254,   0,
   31, 252,   0,
    7, 224,   0,
};
static Character character_115 = {
  20, // width
  18, // height
  3, // bytes per line
  16, // height offset
  115, // unicode id
  character_data_115, // data
};

// Character: t unicode: 116
static char character_data_116[] = {
    0,  96,   0,
    0,  96,   0,
    0,  96,   0,
    0, 224,   0,
    0, 224,   0,
    0, 192,   0,
    1, 192,   0,
   15, 255, 128,
   31, 255, 128,
   15, 255, 128,
    1, 128,   0,
    3, 128,   0,
    3, 128,   0,
    3,   0,   0,
    7,   0,   0,
    7,   0,   0,
    6,   0,   0,
    6,   0,   0,
    6,   0,   0,
   14,   0,   0,
    6,   1, 128,
    7,   7, 128,
    7, 255, 128,
    3, 254,   0,
    0, 248,   0,
};
static Character character_116 = {
  20, // width
  25, // height
  3, // bytes per line
  9, // height offset
  116, // unicode id
  character_data_116, // data
};

// Character: u unicode: 117
static char character_data_117[] = {
    4,   0,  48,
   14,   0, 112,
   12,   0, 112,
   12,   0,  96,
   28,   0,  96,
   28,   0, 224,
   24,   0, 224,
   24,   0, 192,
   56,   0, 192,
   56,   1, 192,
   48,   1, 192,
   48,   3, 128,
   48,   3, 128,
   56,  15,   0,
   60,  30,   0,
   31, 252,   0,
   15, 248,   0,
    7, 224,   0,
};
static Character character_117 = {
  20, // width
  18, // height
  3, // bytes per line
  16, // height offset
  117, // unicode id
  character_data_117, // data
};

// Character: v unicode: 118
static char character_data_118[] = {
    8,   0,  16,
   28,   0,  56,
   28,   0, 112,
   12,   0, 240,
   12,   0, 224,
   14,   1, 192,
   14,   3, 128,
    6,   7, 128,
    6,  15,   0,
    7,  14,   0,
    7,  28,   0,
    7,  60,   0,
    3, 120,   0,
    3, 240,   0,
    3, 224,   0,
    3, 224,   0,
    1, 192,   0,
    1, 128,   0,
};
static Character character_118 = {
  21, // width
  18, // height
  3, // bytes per line
  16, // height offset
  118, // unicode id
  character_data_118, // data
};

// Character: w unicode: 119
static char character_data_119[] = {
    8,  32,  16,
   28, 112,  56,
   28, 112,  48,
   28, 112, 112,
   28, 112, 224,
   28, 112, 224,
   28, 113, 192,
   28, 113, 192,
   28, 243, 128,
   13, 243, 128,
   13, 247,   0,
   15, 254,   0,
   15, 190,   0,
   15,  60,   0,
   15,  60,   0,
   14,  56,   0,
   14,  56,   0,
   12,  48,   0,
};
static Character character_119 = {
  21, // width
  18, // height
  3, // bytes per line
  16, // height offset
  119, // unicode id
  character_data_119, // data
};

// Character: x unicode: 120
static char character_data_120[] = {
    4,   0,   8,
   14,   0,  60,
   15,   0, 120,
    7, 128, 240,
    3, 129, 224,
    1, 199, 192,
    1, 239, 128,
    0, 254,   0,
    0, 124,   0,
    0, 248,   0,
    1, 248,   0,
    3, 220,   0,
    7, 142,   0,
   31,   7,   0,
   60,   7,   0,
  120,   3, 128,
  240,   1, 192,
   96,   1, 128,
};
static Character character_120 = {
  22, // width
  18, // height
  3, // bytes per line
  16, // height offset
  120, // unicode id
  character_data_120, // data
};

// Character: y unicode: 121
static char character_data_121[] = {
    2,   0,  48,
    7,   0,  48,
    6,   0, 112,
    6,   0, 112,
   14,   0,  96,
   14,   0,  96,
   12,   0, 224,
   12,   0, 224,
   28,   0, 192,
   28,   1, 192,
   24,   1, 192,
   24,   1, 192,
   24,   3, 128,
   24,   7, 128,
   30,  31, 128,
   15, 255,   0,
   15, 255,   0,
    3, 231,   0,
    0,   7,   0,
    0,  14,   0,
   96,  14,   0,
  112,  28,   0,
  120, 124,   0,
   63, 248,   0,
   31, 224,   0,
   15, 128,   0,
};
static Character character_121 = {
  21, // width
  26, // height
  3, // bytes per line
  16, // height offset
  121, // unicode id
  character_data_121, // data
};

// Character: z unicode: 122
static char character_data_122[] = {
    7, 255, 248,
   15, 255, 252,
    7, 255, 248,
    0,   0, 240,
    0,   1, 192,
    0,   3, 128,
    0,  15,   0,
    0,  30,   0,
    0,  56,   0,
    0, 240,   0,
    1, 224,   0,
    3, 192,   0,
    7,   0,   0,
   30,   0,   0,
   60,   0,   0,
  127, 255, 128,
  255, 255, 192,
  127, 255, 128,
};
static Character character_122 = {
  22, // width
  18, // height
  3, // bytes per line
  16, // height offset
  122, // unicode id
  character_data_122, // data
};

static Character *characters[] = {
  &character_32, //
  &character_44, // ,
  &character_46, // .
  &character_48, // 0
  &character_49, // 1
  &character_50, // 2
  &character_51, // 3
  &character_52, // 4
  &character_53, // 5
  &character_54, // 6
  &character_55, // 7
  &character_56, // 8
  &character_57, // 9
  &character_58, // :
  &character_59, // ;
  &character_65, // A
  &character_66, // B
  &character_67, // C
  &character_68, // D
  &character_69, // E
  &character_70, // F
  &character_71, // G
  &character_72, // H
  &character_73, // I
  &character_75, // K
  &character_76, // L
  &character_77, // M
  &character_78, // N
  &character_79, // O
  &character_80, // P
  &character_81, // Q
  &character_82, // R
  &character_83, // S
  &character_84, // T
  &character_86, // V
  &character_87, // W
  &character_88, // X
  &character_89, // Y
  &character_90, // Z
  &character_97, // a
  &character_98, // b
  &character_99, // c
  &character_100, // d
  &character_101, // e
  &character_102, // f
  &character_103, // g
  &character_104, // h
  &character_105, // i
  &character_106, // j
  &character_107, // k
  &character_108, // l
  &character_109, // m
  &character_110, // n
  &character_111, // o
  &character_112, // p
  &character_113, // q
  &character_114, // r
  &character_115, // s
  &character_116, // t
  &character_117, // u
  &character_118, // v
  &character_119, // w
  &character_120, // x
  &character_121, // y
  &character_122, // z
};

Font font = {
  40, // font_size
  1, // bits_per_pixel
  65, // character_count
  characters, // character_table
};
