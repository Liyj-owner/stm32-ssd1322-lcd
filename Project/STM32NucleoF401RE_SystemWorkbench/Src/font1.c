#include "font1.h"
/*----------------------------------------*
 *        Generated with MTTools          *
 *        TODO: website address?          *
 *----------------------------------------*/


/*----------------------------------------
// font struct definitions:

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
	Character **characters;
} Font;
----------------------------------------*/


/*
characters:  ,.0123456789:;ABCDEFGHIKLMNOPQRSTVWXYZabcdefghijklmnopqrstuvwxyz
count: 65
font size: 8
bits per pixel: 1
*/

// Character:   unicode: 32
static uint8_t character_data_32[] = {
};
static Character character_32 = {
  3, // width
  0, // height
  0, // bytes per line
  0, // height offset
  32, // unicode id
  character_data_32, // data
};

// Character: , unicode: 44
static uint8_t character_data_44[] = {
   64,
   64,
  128,
};
static Character character_44 = {
  3, // width
  3, // height
  1, // bytes per line
  11, // height offset
  44, // unicode id
  character_data_44, // data
};

// Character: . unicode: 46
static uint8_t character_data_46[] = {
  128,
};
static Character character_46 = {
  2, // width
  1, // height
  1, // bytes per line
  11, // height offset
  46, // unicode id
  character_data_46, // data
};

// Character: 0 unicode: 48
static uint8_t character_data_48[] = {
  112,
  136,
  136,
  136,
  136,
  136,
  136,
  112,
};
static Character character_48 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  48, // unicode id
  character_data_48, // data
};

// Character: 1 unicode: 49
static uint8_t character_data_49[] = {
   32,
   96,
  160,
   32,
   32,
   32,
   32,
   32,
};
static Character character_49 = {
  4, // width
  8, // height
  1, // bytes per line
  4, // height offset
  49, // unicode id
  character_data_49, // data
};

// Character: 2 unicode: 50
static uint8_t character_data_50[] = {
  112,
  136,
    8,
    8,
   16,
   32,
   64,
  248,
};
static Character character_50 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  50, // unicode id
  character_data_50, // data
};

// Character: 3 unicode: 51
static uint8_t character_data_51[] = {
  112,
  136,
    8,
   48,
    8,
    8,
  136,
  112,
};
static Character character_51 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  51, // unicode id
  character_data_51, // data
};

// Character: 4 unicode: 52
static uint8_t character_data_52[] = {
   16,
   48,
   80,
  144,
  248,
   16,
   16,
   16,
};
static Character character_52 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  52, // unicode id
  character_data_52, // data
};

// Character: 5 unicode: 53
static uint8_t character_data_53[] = {
  248,
  128,
  128,
  240,
    8,
    8,
  136,
  112,
};
static Character character_53 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  53, // unicode id
  character_data_53, // data
};

// Character: 6 unicode: 54
static uint8_t character_data_54[] = {
  112,
  136,
  128,
  240,
  136,
  136,
  136,
  112,
};
static Character character_54 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  54, // unicode id
  character_data_54, // data
};

// Character: 7 unicode: 55
static uint8_t character_data_55[] = {
  248,
    8,
   16,
   32,
   32,
   64,
   64,
   64,
};
static Character character_55 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  55, // unicode id
  character_data_55, // data
};

// Character: 8 unicode: 56
static uint8_t character_data_56[] = {
  112,
  136,
  136,
  112,
  136,
  136,
  136,
  112,
};
static Character character_56 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  56, // unicode id
  character_data_56, // data
};

// Character: 9 unicode: 57
static uint8_t character_data_57[] = {
  112,
  136,
  136,
  136,
  120,
    8,
  136,
  112,
};
static Character character_57 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  57, // unicode id
  character_data_57, // data
};

// Character: : unicode: 58
static uint8_t character_data_58[] = {
  128,
    0,
    0,
    0,
    0,
  128,
};
static Character character_58 = {
  2, // width
  6, // height
  1, // bytes per line
  6, // height offset
  58, // unicode id
  character_data_58, // data
};

// Character: ; unicode: 59
static uint8_t character_data_59[] = {
   64,
    0,
    0,
    0,
    0,
   64,
   64,
  128,
};
static Character character_59 = {
  3, // width
  8, // height
  1, // bytes per line
  6, // height offset
  59, // unicode id
  character_data_59, // data
};

// Character: A unicode: 65
static uint8_t character_data_65[] = {
   16,
   16,
   40,
   40,
   68,
  124,
  130,
  130,
};
static Character character_65 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  65, // unicode id
  character_data_65, // data
};

// Character: B unicode: 66
static uint8_t character_data_66[] = {
  248,
  132,
  132,
  248,
  132,
  132,
  132,
  248,
};
static Character character_66 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  66, // unicode id
  character_data_66, // data
};

// Character: C unicode: 67
static uint8_t character_data_67[] = {
   56,
   68,
  128,
  128,
  128,
  128,
   68,
   56,
};
static Character character_67 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  67, // unicode id
  character_data_67, // data
};

// Character: D unicode: 68
static uint8_t character_data_68[] = {
  240,
  136,
  132,
  132,
  132,
  132,
  136,
  240,
};
static Character character_68 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  68, // unicode id
  character_data_68, // data
};

// Character: E unicode: 69
static uint8_t character_data_69[] = {
  252,
  128,
  128,
  252,
  128,
  128,
  128,
  252,
};
static Character character_69 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  69, // unicode id
  character_data_69, // data
};

// Character: F unicode: 70
static uint8_t character_data_70[] = {
  252,
  128,
  128,
  252,
  128,
  128,
  128,
  128,
};
static Character character_70 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  70, // unicode id
  character_data_70, // data
};

// Character: G unicode: 71
static uint8_t character_data_71[] = {
   56,
   68,
  130,
  128,
  142,
  130,
   68,
   56,
};
static Character character_71 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  71, // unicode id
  character_data_71, // data
};

// Character: H unicode: 72
static uint8_t character_data_72[] = {
  132,
  132,
  132,
  252,
  132,
  132,
  132,
  132,
};
static Character character_72 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  72, // unicode id
  character_data_72, // data
};

// Character: I unicode: 73
static uint8_t character_data_73[] = {
  128,
  128,
  128,
  128,
  128,
  128,
  128,
  128,
};
static Character character_73 = {
  2, // width
  8, // height
  1, // bytes per line
  4, // height offset
  73, // unicode id
  character_data_73, // data
};

// Character: K unicode: 75
static uint8_t character_data_75[] = {
  132,
  136,
  144,
  160,
  208,
  136,
  132,
  132,
};
static Character character_75 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  75, // unicode id
  character_data_75, // data
};

// Character: L unicode: 76
static uint8_t character_data_76[] = {
  128,
  128,
  128,
  128,
  128,
  128,
  128,
  252,
};
static Character character_76 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  76, // unicode id
  character_data_76, // data
};

// Character: M unicode: 77
static uint8_t character_data_77[] = {
  130,
  198,
  170,
  146,
  130,
  130,
  130,
  130,
};
static Character character_77 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  77, // unicode id
  character_data_77, // data
};

// Character: N unicode: 78
static uint8_t character_data_78[] = {
  132,
  196,
  164,
  148,
  140,
  132,
  132,
  132,
};
static Character character_78 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  78, // unicode id
  character_data_78, // data
};

// Character: O unicode: 79
static uint8_t character_data_79[] = {
   56,
   68,
  130,
  130,
  130,
  130,
   68,
   56,
};
static Character character_79 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  79, // unicode id
  character_data_79, // data
};

// Character: P unicode: 80
static uint8_t character_data_80[] = {
  248,
  132,
  132,
  132,
  248,
  128,
  128,
  128,
};
static Character character_80 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  80, // unicode id
  character_data_80, // data
};

// Character: Q unicode: 81
static uint8_t character_data_81[] = {
   56,
   68,
  130,
  130,
  130,
  138,
   68,
   58,
};
static Character character_81 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  81, // unicode id
  character_data_81, // data
};

// Character: R unicode: 82
static uint8_t character_data_82[] = {
  248,
  132,
  132,
  248,
  132,
  132,
  132,
  132,
};
static Character character_82 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  82, // unicode id
  character_data_82, // data
};

// Character: S unicode: 83
static uint8_t character_data_83[] = {
  120,
  132,
  128,
  120,
    4,
    4,
  132,
  120,
};
static Character character_83 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  83, // unicode id
  character_data_83, // data
};

// Character: T unicode: 84
static uint8_t character_data_84[] = {
  254,
   16,
   16,
   16,
   16,
   16,
   16,
   16,
};
static Character character_84 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  84, // unicode id
  character_data_84, // data
};

// Character: V unicode: 86
static uint8_t character_data_86[] = {
  130,
  130,
   68,
   68,
   40,
   40,
   16,
   16,
};
static Character character_86 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  86, // unicode id
  character_data_86, // data
};

// Character: W unicode: 87
static uint8_t character_data_87[] = {
  136, 128,
  136, 128,
   73,   0,
   85,   0,
   85,   0,
   34,   0,
   34,   0,
   34,   0,
};
static Character character_87 = {
  10, // width
  8, // height
  2, // bytes per line
  4, // height offset
  87, // unicode id
  character_data_87, // data
};

// Character: X unicode: 88
static uint8_t character_data_88[] = {
  130,
   68,
   40,
   16,
   16,
   40,
   68,
  130,
};
static Character character_88 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  88, // unicode id
  character_data_88, // data
};

// Character: Y unicode: 89
static uint8_t character_data_89[] = {
  130,
   68,
   40,
   16,
   16,
   16,
   16,
   16,
};
static Character character_89 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  89, // unicode id
  character_data_89, // data
};

// Character: Z unicode: 90
static uint8_t character_data_90[] = {
  252,
    4,
    8,
   16,
   32,
   64,
  128,
  252,
};
static Character character_90 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  90, // unicode id
  character_data_90, // data
};

// Character: a unicode: 97
static uint8_t character_data_97[] = {
  112,
    8,
  120,
  136,
  136,
  120,
};
static Character character_97 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  97, // unicode id
  character_data_97, // data
};

// Character: b unicode: 98
static uint8_t character_data_98[] = {
  128,
  128,
  240,
  136,
  136,
  136,
  136,
  240,
};
static Character character_98 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  98, // unicode id
  character_data_98, // data
};

// Character: c unicode: 99
static uint8_t character_data_99[] = {
  112,
  136,
  128,
  128,
  136,
  112,
};
static Character character_99 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  99, // unicode id
  character_data_99, // data
};

// Character: d unicode: 100
static uint8_t character_data_100[] = {
    8,
    8,
  120,
  136,
  136,
  136,
  136,
  120,
};
static Character character_100 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  100, // unicode id
  character_data_100, // data
};

// Character: e unicode: 101
static uint8_t character_data_101[] = {
  112,
  136,
  248,
  128,
  136,
  112,
};
static Character character_101 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  101, // unicode id
  character_data_101, // data
};

// Character: f unicode: 102
static uint8_t character_data_102[] = {
   48,
   64,
   64,
  240,
   64,
   64,
   64,
   64,
   64,
};
static Character character_102 = {
  5, // width
  9, // height
  1, // bytes per line
  3, // height offset
  102, // unicode id
  character_data_102, // data
};

// Character: g unicode: 103
static uint8_t character_data_103[] = {
  120,
  136,
  136,
  136,
  136,
  120,
    8,
  112,
};
static Character character_103 = {
  6, // width
  8, // height
  1, // bytes per line
  6, // height offset
  103, // unicode id
  character_data_103, // data
};

// Character: h unicode: 104
static uint8_t character_data_104[] = {
  128,
  128,
  240,
  136,
  136,
  136,
  136,
  136,
};
static Character character_104 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  104, // unicode id
  character_data_104, // data
};

// Character: i unicode: 105
static uint8_t character_data_105[] = {
  128,
    0,
  128,
  128,
  128,
  128,
  128,
  128,
};
static Character character_105 = {
  2, // width
  8, // height
  1, // bytes per line
  4, // height offset
  105, // unicode id
  character_data_105, // data
};

// Character: j unicode: 106
static uint8_t character_data_106[] = {
   64,
    0,
   64,
   64,
   64,
   64,
   64,
   64,
   64,
  128,
};
static Character character_106 = {
  3, // width
  10, // height
  1, // bytes per line
  4, // height offset
  106, // unicode id
  character_data_106, // data
};

// Character: k unicode: 107
static uint8_t character_data_107[] = {
  128,
  128,
  144,
  160,
  192,
  192,
  160,
  144,
};
static Character character_107 = {
  5, // width
  8, // height
  1, // bytes per line
  4, // height offset
  107, // unicode id
  character_data_107, // data
};

// Character: l unicode: 108
static uint8_t character_data_108[] = {
  128,
  128,
  128,
  128,
  128,
  128,
  128,
  128,
};
static Character character_108 = {
  2, // width
  8, // height
  1, // bytes per line
  4, // height offset
  108, // unicode id
  character_data_108, // data
};

// Character: m unicode: 109
static uint8_t character_data_109[] = {
  236,
  146,
  146,
  146,
  146,
  146,
};
static Character character_109 = {
  8, // width
  6, // height
  1, // bytes per line
  6, // height offset
  109, // unicode id
  character_data_109, // data
};

// Character: n unicode: 110
static uint8_t character_data_110[] = {
  240,
  136,
  136,
  136,
  136,
  136,
};
static Character character_110 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  110, // unicode id
  character_data_110, // data
};

// Character: o unicode: 111
static uint8_t character_data_111[] = {
  112,
  136,
  136,
  136,
  136,
  112,
};
static Character character_111 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  111, // unicode id
  character_data_111, // data
};

// Character: p unicode: 112
static uint8_t character_data_112[] = {
  240,
  136,
  136,
  136,
  136,
  240,
  128,
  128,
};
static Character character_112 = {
  6, // width
  8, // height
  1, // bytes per line
  6, // height offset
  112, // unicode id
  character_data_112, // data
};

// Character: q unicode: 113
static uint8_t character_data_113[] = {
  120,
  136,
  136,
  136,
  136,
  120,
    8,
    8,
};
static Character character_113 = {
  6, // width
  8, // height
  1, // bytes per line
  6, // height offset
  113, // unicode id
  character_data_113, // data
};

// Character: r unicode: 114
static uint8_t character_data_114[] = {
  176,
  192,
  128,
  128,
  128,
  128,
};
static Character character_114 = {
  5, // width
  6, // height
  1, // bytes per line
  6, // height offset
  114, // unicode id
  character_data_114, // data
};

// Character: s unicode: 115
static uint8_t character_data_115[] = {
  112,
  136,
   96,
   16,
  136,
  112,
};
static Character character_115 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  115, // unicode id
  character_data_115, // data
};

// Character: t unicode: 116
static uint8_t character_data_116[] = {
   64,
   64,
  240,
   64,
   64,
   64,
   64,
   48,
};
static Character character_116 = {
  5, // width
  8, // height
  1, // bytes per line
  4, // height offset
  116, // unicode id
  character_data_116, // data
};

// Character: u unicode: 117
static uint8_t character_data_117[] = {
  136,
  136,
  136,
  136,
  136,
  120,
};
static Character character_117 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  117, // unicode id
  character_data_117, // data
};

// Character: v unicode: 118
static uint8_t character_data_118[] = {
  136,
  136,
   80,
   80,
   32,
   32,
};
static Character character_118 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  118, // unicode id
  character_data_118, // data
};

// Character: w unicode: 119
static uint8_t character_data_119[] = {
  136, 128,
  136, 128,
   85,   0,
   85,   0,
   34,   0,
   34,   0,
};
static Character character_119 = {
  10, // width
  6, // height
  2, // bytes per line
  6, // height offset
  119, // unicode id
  character_data_119, // data
};

// Character: x unicode: 120
static uint8_t character_data_120[] = {
  136,
   80,
   32,
   32,
   80,
  136,
};
static Character character_120 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  120, // unicode id
  character_data_120, // data
};

// Character: y unicode: 121
static uint8_t character_data_121[] = {
  136,
  136,
   80,
   80,
   32,
   32,
   32,
   64,
};
static Character character_121 = {
  6, // width
  8, // height
  1, // bytes per line
  6, // height offset
  121, // unicode id
  character_data_121, // data
};

// Character: z unicode: 122
static uint8_t character_data_122[] = {
  248,
    8,
   16,
   32,
   64,
  248,
};
static Character character_122 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
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
  8, // font_size
  1, // bits_per_pixel
  65, // character_count
  characters, // characters
};

