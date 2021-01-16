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

#include "fonts.h"

/*
characters:  ,.0123456789:;ABCDEFGHIKLMNOPQRSTVWXYZabcdefghijklmnopqrstuvwxyz
count: 65
font size: 8
bits per pixel: 1
*/

// Character:   unicode: 32
static const uint8_t character_32_data[] = {
};
static const Character character_32 = {
  3, // width
  0, // height
  0, // bytes per line
  0, // height offset
  32, // unicode id
  (uint8_t *)character_32_data, // data
};

// Character: , unicode: 44
static const uint8_t character_44_data[] = {
   64,
   64,
  128,
};
static const Character character_44 = {
  3, // width
  3, // height
  1, // bytes per line
  11, // height offset
  44, // unicode id
  (uint8_t *)character_44_data, // data
};

// Character: . unicode: 46
static const uint8_t character_46_data[] = {
  128,
};
static const Character character_46 = {
  2, // width
  1, // height
  1, // bytes per line
  11, // height offset
  46, // unicode id
  (uint8_t *)character_46_data, // data
};

// Character: 0 unicode: 48
static const uint8_t character_48_data[] = {
  112,
  136,
  136,
  136,
  136,
  136,
  136,
  112,
};
static const Character character_48 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  48, // unicode id
  (uint8_t *)character_48_data, // data
};

// Character: 1 unicode: 49
static const uint8_t character_49_data[] = {
   32,
   96,
  160,
   32,
   32,
   32,
   32,
   32,
};
static const Character character_49 = {
  4, // width
  8, // height
  1, // bytes per line
  4, // height offset
  49, // unicode id
  (uint8_t *)character_49_data, // data
};

// Character: 2 unicode: 50
static const uint8_t character_50_data[] = {
  112,
  136,
    8,
    8,
   16,
   32,
   64,
  248,
};
static const Character character_50 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  50, // unicode id
  (uint8_t *)character_50_data, // data
};

// Character: 3 unicode: 51
static const uint8_t character_51_data[] = {
  112,
  136,
    8,
   48,
    8,
    8,
  136,
  112,
};
static const Character character_51 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  51, // unicode id
  (uint8_t *)character_51_data, // data
};

// Character: 4 unicode: 52
static const uint8_t character_52_data[] = {
   16,
   48,
   80,
  144,
  248,
   16,
   16,
   16,
};
static const Character character_52 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  52, // unicode id
  (uint8_t *)character_52_data, // data
};

// Character: 5 unicode: 53
static const uint8_t character_53_data[] = {
  248,
  128,
  128,
  240,
    8,
    8,
  136,
  112,
};
static const Character character_53 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  53, // unicode id
  (uint8_t *)character_53_data, // data
};

// Character: 6 unicode: 54
static const uint8_t character_54_data[] = {
  112,
  136,
  128,
  240,
  136,
  136,
  136,
  112,
};
static const Character character_54 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  54, // unicode id
  (uint8_t *)character_54_data, // data
};

// Character: 7 unicode: 55
static const uint8_t character_55_data[] = {
  248,
    8,
   16,
   32,
   32,
   64,
   64,
   64,
};
static const Character character_55 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  55, // unicode id
  (uint8_t *)character_55_data, // data
};

// Character: 8 unicode: 56
static const uint8_t character_56_data[] = {
  112,
  136,
  136,
  112,
  136,
  136,
  136,
  112,
};
static const Character character_56 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  56, // unicode id
  (uint8_t *)character_56_data, // data
};

// Character: 9 unicode: 57
static const uint8_t character_57_data[] = {
  112,
  136,
  136,
  136,
  120,
    8,
  136,
  112,
};
static const Character character_57 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  57, // unicode id
  (uint8_t *)character_57_data, // data
};

// Character: : unicode: 58
static const uint8_t character_58_data[] = {
  128,
    0,
    0,
    0,
    0,
  128,
};
static const Character character_58 = {
  2, // width
  6, // height
  1, // bytes per line
  6, // height offset
  58, // unicode id
  (uint8_t *)character_58_data, // data
};

// Character: ; unicode: 59
static const uint8_t character_59_data[] = {
   64,
    0,
    0,
    0,
    0,
   64,
   64,
  128,
};
static const Character character_59 = {
  3, // width
  8, // height
  1, // bytes per line
  6, // height offset
  59, // unicode id
  (uint8_t *)character_59_data, // data
};

// Character: A unicode: 65
static const uint8_t character_65_data[] = {
   16,
   16,
   40,
   40,
   68,
  124,
  130,
  130,
};
static const Character character_65 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  65, // unicode id
  (uint8_t *)character_65_data, // data
};

// Character: B unicode: 66
static const uint8_t character_66_data[] = {
  248,
  132,
  132,
  248,
  132,
  132,
  132,
  248,
};
static const Character character_66 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  66, // unicode id
  (uint8_t *)character_66_data, // data
};

// Character: C unicode: 67
static const uint8_t character_67_data[] = {
   56,
   68,
  128,
  128,
  128,
  128,
   68,
   56,
};
static const Character character_67 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  67, // unicode id
  (uint8_t *)character_67_data, // data
};

// Character: D unicode: 68
static const uint8_t character_68_data[] = {
  240,
  136,
  132,
  132,
  132,
  132,
  136,
  240,
};
static const Character character_68 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  68, // unicode id
  (uint8_t *)character_68_data, // data
};

// Character: E unicode: 69
static const uint8_t character_69_data[] = {
  252,
  128,
  128,
  252,
  128,
  128,
  128,
  252,
};
static const Character character_69 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  69, // unicode id
  (uint8_t *)character_69_data, // data
};

// Character: F unicode: 70
static const uint8_t character_70_data[] = {
  252,
  128,
  128,
  252,
  128,
  128,
  128,
  128,
};
static const Character character_70 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  70, // unicode id
  (uint8_t *)character_70_data, // data
};

// Character: G unicode: 71
static const uint8_t character_71_data[] = {
   56,
   68,
  130,
  128,
  142,
  130,
   68,
   56,
};
static const Character character_71 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  71, // unicode id
  (uint8_t *)character_71_data, // data
};

// Character: H unicode: 72
static const uint8_t character_72_data[] = {
  132,
  132,
  132,
  252,
  132,
  132,
  132,
  132,
};
static const Character character_72 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  72, // unicode id
  (uint8_t *)character_72_data, // data
};

// Character: I unicode: 73
static const uint8_t character_73_data[] = {
  128,
  128,
  128,
  128,
  128,
  128,
  128,
  128,
};
static const Character character_73 = {
  2, // width
  8, // height
  1, // bytes per line
  4, // height offset
  73, // unicode id
  (uint8_t *)character_73_data, // data
};

// Character: K unicode: 75
static const uint8_t character_75_data[] = {
  132,
  136,
  144,
  160,
  208,
  136,
  132,
  132,
};
static const Character character_75 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  75, // unicode id
  (uint8_t *)character_75_data, // data
};

// Character: L unicode: 76
static const uint8_t character_76_data[] = {
  128,
  128,
  128,
  128,
  128,
  128,
  128,
  252,
};
static const Character character_76 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  76, // unicode id
  (uint8_t *)character_76_data, // data
};

// Character: M unicode: 77
static const uint8_t character_77_data[] = {
  130,
  198,
  170,
  146,
  130,
  130,
  130,
  130,
};
static const Character character_77 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  77, // unicode id
  (uint8_t *)character_77_data, // data
};

// Character: N unicode: 78
static const uint8_t character_78_data[] = {
  132,
  196,
  164,
  148,
  140,
  132,
  132,
  132,
};
static const Character character_78 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  78, // unicode id
  (uint8_t *)character_78_data, // data
};

// Character: O unicode: 79
static const uint8_t character_79_data[] = {
   56,
   68,
  130,
  130,
  130,
  130,
   68,
   56,
};
static const Character character_79 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  79, // unicode id
  (uint8_t *)character_79_data, // data
};

// Character: P unicode: 80
static const uint8_t character_80_data[] = {
  248,
  132,
  132,
  132,
  248,
  128,
  128,
  128,
};
static const Character character_80 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  80, // unicode id
  (uint8_t *)character_80_data, // data
};

// Character: Q unicode: 81
static const uint8_t character_81_data[] = {
   56,
   68,
  130,
  130,
  130,
  138,
   68,
   58,
};
static const Character character_81 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  81, // unicode id
  (uint8_t *)character_81_data, // data
};

// Character: R unicode: 82
static const uint8_t character_82_data[] = {
  248,
  132,
  132,
  248,
  132,
  132,
  132,
  132,
};
static const Character character_82 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  82, // unicode id
  (uint8_t *)character_82_data, // data
};

// Character: S unicode: 83
static const uint8_t character_83_data[] = {
  120,
  132,
  128,
  120,
    4,
    4,
  132,
  120,
};
static const Character character_83 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  83, // unicode id
  (uint8_t *)character_83_data, // data
};

// Character: T unicode: 84
static const uint8_t character_84_data[] = {
  254,
   16,
   16,
   16,
   16,
   16,
   16,
   16,
};
static const Character character_84 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  84, // unicode id
  (uint8_t *)character_84_data, // data
};

// Character: V unicode: 86
static const uint8_t character_86_data[] = {
  130,
  130,
   68,
   68,
   40,
   40,
   16,
   16,
};
static const Character character_86 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  86, // unicode id
  (uint8_t *)character_86_data, // data
};

// Character: W unicode: 87
static const uint8_t character_87_data[] = {
  136, 128,
  136, 128,
   73,   0,
   85,   0,
   85,   0,
   34,   0,
   34,   0,
   34,   0,
};
static const Character character_87 = {
  10, // width
  8, // height
  2, // bytes per line
  4, // height offset
  87, // unicode id
  (uint8_t *)character_87_data, // data
};

// Character: X unicode: 88
static const uint8_t character_88_data[] = {
  130,
   68,
   40,
   16,
   16,
   40,
   68,
  130,
};
static const Character character_88 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  88, // unicode id
  (uint8_t *)character_88_data, // data
};

// Character: Y unicode: 89
static const uint8_t character_89_data[] = {
  130,
   68,
   40,
   16,
   16,
   16,
   16,
   16,
};
static const Character character_89 = {
  8, // width
  8, // height
  1, // bytes per line
  4, // height offset
  89, // unicode id
  (uint8_t *)character_89_data, // data
};

// Character: Z unicode: 90
static const uint8_t character_90_data[] = {
  252,
    4,
    8,
   16,
   32,
   64,
  128,
  252,
};
static const Character character_90 = {
  7, // width
  8, // height
  1, // bytes per line
  4, // height offset
  90, // unicode id
  (uint8_t *)character_90_data, // data
};

// Character: a unicode: 97
static const uint8_t character_97_data[] = {
  112,
    8,
  120,
  136,
  136,
  120,
};
static const Character character_97 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  97, // unicode id
  (uint8_t *)character_97_data, // data
};

// Character: b unicode: 98
static const uint8_t character_98_data[] = {
  128,
  128,
  240,
  136,
  136,
  136,
  136,
  240,
};
static const Character character_98 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  98, // unicode id
  (uint8_t *)character_98_data, // data
};

// Character: c unicode: 99
static const uint8_t character_99_data[] = {
  112,
  136,
  128,
  128,
  136,
  112,
};
static const Character character_99 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  99, // unicode id
  (uint8_t *)character_99_data, // data
};

// Character: d unicode: 100
static const uint8_t character_100_data[] = {
    8,
    8,
  120,
  136,
  136,
  136,
  136,
  120,
};
static const Character character_100 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  100, // unicode id
  (uint8_t *)character_100_data, // data
};

// Character: e unicode: 101
static const uint8_t character_101_data[] = {
  112,
  136,
  248,
  128,
  136,
  112,
};
static const Character character_101 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  101, // unicode id
  (uint8_t *)character_101_data, // data
};

// Character: f unicode: 102
static const uint8_t character_102_data[] = {
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
static const Character character_102 = {
  5, // width
  9, // height
  1, // bytes per line
  3, // height offset
  102, // unicode id
  (uint8_t *)character_102_data, // data
};

// Character: g unicode: 103
static const uint8_t character_103_data[] = {
  120,
  136,
  136,
  136,
  136,
  120,
    8,
  112,
};
static const Character character_103 = {
  6, // width
  8, // height
  1, // bytes per line
  6, // height offset
  103, // unicode id
  (uint8_t *)character_103_data, // data
};

// Character: h unicode: 104
static const uint8_t character_104_data[] = {
  128,
  128,
  240,
  136,
  136,
  136,
  136,
  136,
};
static const Character character_104 = {
  6, // width
  8, // height
  1, // bytes per line
  4, // height offset
  104, // unicode id
  (uint8_t *)character_104_data, // data
};

// Character: i unicode: 105
static const uint8_t character_105_data[] = {
  128,
    0,
  128,
  128,
  128,
  128,
  128,
  128,
};
static const Character character_105 = {
  2, // width
  8, // height
  1, // bytes per line
  4, // height offset
  105, // unicode id
  (uint8_t *)character_105_data, // data
};

// Character: j unicode: 106
static const uint8_t character_106_data[] = {
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
static const Character character_106 = {
  3, // width
  10, // height
  1, // bytes per line
  4, // height offset
  106, // unicode id
  (uint8_t *)character_106_data, // data
};

// Character: k unicode: 107
static const uint8_t character_107_data[] = {
  128,
  128,
  144,
  160,
  192,
  192,
  160,
  144,
};
static const Character character_107 = {
  5, // width
  8, // height
  1, // bytes per line
  4, // height offset
  107, // unicode id
  (uint8_t *)character_107_data, // data
};

// Character: l unicode: 108
static const uint8_t character_108_data[] = {
  128,
  128,
  128,
  128,
  128,
  128,
  128,
  128,
};
static const Character character_108 = {
  2, // width
  8, // height
  1, // bytes per line
  4, // height offset
  108, // unicode id
  (uint8_t *)character_108_data, // data
};

// Character: m unicode: 109
static const uint8_t character_109_data[] = {
  236,
  146,
  146,
  146,
  146,
  146,
};
static const Character character_109 = {
  8, // width
  6, // height
  1, // bytes per line
  6, // height offset
  109, // unicode id
  (uint8_t *)character_109_data, // data
};

// Character: n unicode: 110
static const uint8_t character_110_data[] = {
  240,
  136,
  136,
  136,
  136,
  136,
};
static const Character character_110 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  110, // unicode id
  (uint8_t *)character_110_data, // data
};

// Character: o unicode: 111
static const uint8_t character_111_data[] = {
  112,
  136,
  136,
  136,
  136,
  112,
};
static const Character character_111 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  111, // unicode id
  (uint8_t *)character_111_data, // data
};

// Character: p unicode: 112
static const uint8_t character_112_data[] = {
  240,
  136,
  136,
  136,
  136,
  240,
  128,
  128,
};
static const Character character_112 = {
  6, // width
  8, // height
  1, // bytes per line
  6, // height offset
  112, // unicode id
  (uint8_t *)character_112_data, // data
};

// Character: q unicode: 113
static const uint8_t character_113_data[] = {
  120,
  136,
  136,
  136,
  136,
  120,
    8,
    8,
};
static const Character character_113 = {
  6, // width
  8, // height
  1, // bytes per line
  6, // height offset
  113, // unicode id
  (uint8_t *)character_113_data, // data
};

// Character: r unicode: 114
static const uint8_t character_114_data[] = {
  176,
  192,
  128,
  128,
  128,
  128,
};
static const Character character_114 = {
  5, // width
  6, // height
  1, // bytes per line
  6, // height offset
  114, // unicode id
  (uint8_t *)character_114_data, // data
};

// Character: s unicode: 115
static const uint8_t character_115_data[] = {
  112,
  136,
   96,
   16,
  136,
  112,
};
static const Character character_115 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  115, // unicode id
  (uint8_t *)character_115_data, // data
};

// Character: t unicode: 116
static const uint8_t character_116_data[] = {
   64,
   64,
  240,
   64,
   64,
   64,
   64,
   48,
};
static const Character character_116 = {
  5, // width
  8, // height
  1, // bytes per line
  4, // height offset
  116, // unicode id
  (uint8_t *)character_116_data, // data
};

// Character: u unicode: 117
static const uint8_t character_117_data[] = {
  136,
  136,
  136,
  136,
  136,
  120,
};
static const Character character_117 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  117, // unicode id
  (uint8_t *)character_117_data, // data
};

// Character: v unicode: 118
static const uint8_t character_118_data[] = {
  136,
  136,
   80,
   80,
   32,
   32,
};
static const Character character_118 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  118, // unicode id
  (uint8_t *)character_118_data, // data
};

// Character: w unicode: 119
static const uint8_t character_119_data[] = {
  136, 128,
  136, 128,
   85,   0,
   85,   0,
   34,   0,
   34,   0,
};
static const Character character_119 = {
  10, // width
  6, // height
  2, // bytes per line
  6, // height offset
  119, // unicode id
  (uint8_t *)character_119_data, // data
};

// Character: x unicode: 120
static const uint8_t character_120_data[] = {
  136,
   80,
   32,
   32,
   80,
  136,
};
static const Character character_120 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  120, // unicode id
  (uint8_t *)character_120_data, // data
};

// Character: y unicode: 121
static const uint8_t character_121_data[] = {
  136,
  136,
   80,
   80,
   32,
   32,
   32,
   64,
};
static const Character character_121 = {
  6, // width
  8, // height
  1, // bytes per line
  6, // height offset
  121, // unicode id
  (uint8_t *)character_121_data, // data
};

// Character: z unicode: 122
static const uint8_t character_122_data[] = {
  248,
    8,
   16,
   32,
   64,
  248,
};
static const Character character_122 = {
  6, // width
  6, // height
  1, // bytes per line
  6, // height offset
  122, // unicode id
  (uint8_t *)character_122_data, // data
};

static const Character *characters[] = {
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

const Font font = {
  8, // font_size
  1, // bits_per_pixel
  65, // character_count
  (Character **)characters, // characters
};
