/* Generated from french.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_ISO_8859_1_french.h"

#include <stddef.h>

#include "../runtime/snowball_runtime.h"

#ifdef SNOWBALL_BIGENDIAN
#define S(W) ((0x##W & 0xff) << 8 | 0x##W >> 8)
#else
#define S(W) (0x##W)
#endif

#ifdef __cplusplus
extern "C" {
#endif
extern int french_ISO_8859_1_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif

#define s_9 (s_0 + 1)
#define s_18 (s_6 + 1)
#define s_1 (s_7 + 2)
#define s_6 (s_5 + 1)
#define s_10 (s_4 + 1)
#define s_8 (s_15 + 1)
static const symbol s_0[] = { 'q', 'u' };
static const symbol s_2[] = { 'I' };
static const symbol s_3[] = { 'Y' };
static const symbol s_4[] = { 'H', 'e', 'n', 't' };
static const symbol s_5[] = { 'H', 'i', 'c' };
static const symbol s_21[] = { 0xEF };
static const symbol s_7[] = { 'i', 'q', 'U' };
static const symbol s_19[] = { 'y' };
static const symbol s_20[] = { 0xEB };
static const symbol s_11[] = { 'a', 't' };
static const symbol s_12[] = { 'e', 'u', 'x' };
static const symbol s_13[] = { 'a', 'b', 'l' };
static const symbol s_14[] = { 'e', 'a', 'u' };
static const symbol s_15[] = { 'a', 'l', 'o', 'g' };
static const symbol s_16[] = { 'o', 'u' };
static const symbol s_17[] = { 'a', 'n', 't' };

static const unsigned short a_0[] = {
    0x0000 , 0x7463 , 0x0014 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0018 , 0x0000 , 0x001B ,
    0x0000 , 0x0000 , 0x0000 , 0x001F , 0x0000 , 0x0002 , 0xC001 , S(6C6F),
    0x0000 , 0x6969 , 0xFFFF , 0x0000 , 0x0002 , 0xC001 , S(7261), 0x0000 ,
    0x0002 , 0xC001 , S(7061)
};

static const unsigned short a_1[] = {
    0x0007 , 0x5948 , 0x0014 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFE ,
    0x0000 , 0x0000 , 0x0000 , 0xFFFD , 0x0006 , 0x6569 , 0xFFFC , 0xFFFB
};

static const unsigned short a_2[] = {
    0x0000 , 0x7655 , 0x0024 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0028 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x002C ,
    0x0033 , 0x0000 , 0x0000 , 0x0037 , 0x0000 , 0x0002 , 0xFFFD , S(7169),
    0x0000 , 0x0002 , 0xFFFD , S(6261), 0x0000 , 0xE8E8 , 0x002F , 0x0000 ,
    0x4969 , 0xFFFC , 0xFFFC , 0x0000 , 0x0002 , 0xFFFE , S(7565), 0x0000 ,
    0x6969 , 0xFFFF
};

static const unsigned short a_3[] = {
    0x0000 , 0x7663 , 0x0016 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0019 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x001E , 0x0000 , 0x6969 ,
    0xFFFE , 0x0000 , 0x0003 , 0xFFFF , S(6261), S(0069), 0x0000 , 0x6969 ,
    0xFFFD
};

static const unsigned short a_4[] = {
    0x0000 , 0xE965 , 0x0087 , 0x00CD , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x00D0 , 0x0000 , 0x0000 , 0x0000 , 0x00DF ,
    0x00E4 , 0x01AC , 0x0000 , 0x0000 , 0x0000 , 0x01B9 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x01A8 , 0x0000 ,
    0x7655 , 0x00AB , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00AF ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00BC , 0x0000 , 0x0000 ,
    0x00C1 , 0x00C5 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00C9 ,
    0x00C5 , 0x0000 , 0x00CD , 0x0000 , 0x0002 , 0xFFFF , S(7169), 0x0000 ,
    0x696E , 0x00B3 , 0x00B8 , 0x0000 , 0x0003 , 0xFFFE , S(7461), S(0072),
    0x0000 , 0x6165 , 0xFFFF , 0xFFFB , 0x0000 , 0x0003 , 0xFFFD , S(6F6C),
    S(0067), 0x0000 , 0x0002 , 0xFFFF , S(6261), 0x0000 , 0x0002 , 0xFFFF ,
    S(7369), 0x0000 , 0x0002 , 0xFFF4 , S(7565), 0x0000 , 0x6969 , 0xFFF8 ,
    0x0000 , 0x0002 , 0x00D4 , S(6F69), 0x0000 , 0x7374 , 0x00D8 , 0x00DB ,
    0x0000 , 0x7575 , 0xFFFC , 0x0000 , 0x6175 , 0xFFFE , 0xFFFC , 0x0000 ,
    0x0004 , 0xFFFE , S(7461), S(7565), 0x0000 , 0xE965 , 0x016B , 0x00CD ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0193 ,
    0x0000 , 0x0000 , 0x0000 , 0x00DF , 0x0000 , 0x019B , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x01A8 , 0x0000 , 0x7655 , 0x00AB , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x018F , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x00BC , 0x0000 , 0x0000 , 0x00C1 , 0x00C5 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x00C9 , 0x00C5 , 0x0000 , 0x00CD , 0x0000 ,
    0x696E , 0x00B3 , 0x00B8 , 0x0000 , 0x0002 , 0x0197 , S(6F69), 0x0000 ,
    0x7374 , 0x00D8 , 0x00DB , 0x0000 , 0x0003 , 0x01A0 , S(656D), S(006E),
    0x0010 , 0x6565 , 0x01A3 , 0x0006 , 0x0003 , 0xFFF3 , S(7369), S(0073),
    0x0000 , 0x0002 , 0xFFF9 , S(7469), 0x0000 , 0x0003 , 0x01B1 , S(656D),
    S(006E), 0x0010 , 0x656D , 0x01A3 , 0x01B5 , 0x0000 , 0x6165 , 0xFFF2 ,
    0xFFF1 , 0x0000 , 0x7575 , 0x01BC , 0x0000 , 0x6F61 , 0x01CD , 0x0000 ,
    0x0000 , 0x0000 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFF5 , 0x000A , 0x6565 , 0xFFF7
};

static const unsigned short a_5[] = {
    0x0000 , 0x7A61 , 0x001C , 0x0000 , 0x0000 , 0x0000 , 0x0020 , 0x0000 ,
    0x0000 , 0x0000 , 0x0038 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x003D , 0x0040 , 0x0087 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0158 , 0x0000 , 0x0002 , 0xFFFF , S(7269),
    0x0000 , 0x7469 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x002E , 0x0032 , 0x0000 , 0x0002 ,
    0xFFFF , S(7369), 0x0000 , 0x0005 , 0xFFFF , S(7369), S(6173), S(006E),
    0x0001 , 0x0003 , 0xFFFF , S(7269), S(0061), 0x0000 , 0x6969 , 0xFFFF ,
    0x0000 , 0x7461 , 0x001C , 0x0000 , 0x0000 , 0x0000 , 0x0056 , 0x0000 ,
    0x0000 , 0x0000 , 0x0070 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0077 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0032 , 0x0000 , 0x7469 ,
    0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0x0064 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x002E , 0x0067 , 0x0000 , 0xEEEE , 0xFFFF , 0x0000 ,
    0x6EEE , 0x006B , 0xFFFF , 0x0000 , 0x0004 , 0xFFFF , S(7369), S(6173),
    0x0001 , 0x6161 , 0x0073 , 0x0000 , 0x7273 , 0x003D , 0x002E , 0x0000 ,
    0x6F6F , 0x007A , 0x0000 , 0x7369 , 0x0073 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x003D , 0x002E , 0x0000 ,
    0xEE69 , 0x010F , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0112 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0001 ,
    0x6161 , 0x0073 , 0x0000 , 0x6F61 , 0x0123 , 0x0000 , 0x0000 , 0x0000 ,
    0x0128 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x001C , 0x0000 , 0x0003 , 0xFFFF , S(7369), S(0073),
    0x0000 , 0x7349 , 0x0155 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x003D , 0x002E , 0x0000 , 0x6161 , 0x0073 ,
    0x0000 , 0x6565 , 0x007A
};

static const unsigned short a_6[] = {
    0x0000 , 0x6C76 , 0x0004 , 0x000B , 0x0000 , 0x6170 , 0xFFFF , 0x0008 ,
    0x0000 , 0xE9E9 , 0xC001 , 0x0000 , 0x0002 , 0xC001 , S(7561)
};

static const unsigned short a_7[] = {
    0x0000 , 0xE961 , 0x008B , 0x0000 , 0x0000 , 0x0000 , 0x008F , 0x0000 ,
    0x0000 , 0x0000 , 0x0116 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0119 , 0x011C , 0x0247 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0308 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0xFFFE , 0x0003 , 0x0002 , 0xFFFE , S(7265), 0x0000 ,
    0xE973 , 0x0108 , 0x0112 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFE ,
    0x0000 , 0x6973 , 0x010C , 0x010F , 0x0000 , 0x6161 , 0xFFFC , 0x0000 ,
    0x6161 , 0xFFFD , 0x0000 , 0x0002 , 0xFFFD , S(6E61), 0x0000 , 0x6161 ,
    0x008B , 0x0000 , 0x6565 , 0xFFFE , 0x0000 , 0xE961 , 0x008B , 0x0000 ,
    0x0000 , 0x0000 , 0x01A7 , 0x0000 , 0x0000 , 0x0000 , 0x0231 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0238 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0112 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFE , 0x0000 ,
    0xE96D , 0x0226 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0229 ,
    0x022D , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFE , 0x0000 , 0xE2E2 ,
    0xFFFD , 0x0000 , 0x6973 , 0x010C , 0x010F , 0x0000 , 0x6EE2 , 0x010F ,
    0xFFFD , 0x0000 , 0x6161 , 0x0234 , 0x0004 , 0x6572 , 0xFFFE , 0x0119 ,
    0x0000 , 0x6F6F , 0x023B , 0x0000 , 0x6972 , 0x023F , 0x0119 , 0x0001 ,
    0x7273 , 0x0119 , 0x0243 , 0x0000 , 0x0002 , 0xFFFD , S(7361), 0x0000 ,
    0xE269 , 0x0116 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x02C3 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0xFFFD , 0x0000 , 0x6F61 , 0xFFFD , 0x0000 , 0x0000 ,
    0x0000 , 0x02D4 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0304 , 0x0000 , 0x7349 , 0x0116 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0301 ,
    0x0243 , 0x0000 , 0xE8E8 , 0xFFFE , 0x0000 , 0x0002 , 0xFFFE , S(7265),
    0x0000 , 0x6565 , 0x030B , 0x0002 , 0x6972 , 0x030F , 0x0119 , 0x0002 ,
    0x7273 , 0x0119 , 0x0243
};

static const unsigned short a_8[] = {
    0x0000 , 0x7265 , 0x0010 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0018 , 0x0000 , 0x0000 , 0x0000 , 0x001C ,
    0x0003 , 0x0002 , 0x0014 , S(72E8), 0x0000 , 0x4969 , 0xFFFE , 0xFFFE ,
    0x0000 , 0x0002 , 0xFFFF , S(6F69), 0x0000 , 0x6565 , 0x0014
};

static const unsigned short a_9[] = {
    0x0000 , 0x746C , 0x000B , 0x0000 , 0x0015 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x001C , 0x0000 , 0x6C6C , 0x000E , 0x0000 , 0x6569 ,
    0xC001 , 0x0012 , 0x0000 , 0x6565 , 0xC001 , 0x0000 , 0x6E6E , 0x0018 ,
    0x0000 , 0x656F , 0xC001 , 0xC001 , 0x0000 , 0x0002 , 0xC001 , S(7465)
};

static const unsigned char g_v[] = { 17, 65, 16, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 130, 103, 8, 5 };

static const unsigned char g_oux_ending[] = { 65, 85 };

static const unsigned char g_elision_char[] = { 131, 14, 131 };

static const unsigned char g_keep_with_s[] = { 1, 65, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128 };

extern int french_ISO_8859_1_stem(struct SN_env * z) {
    int among_var;
    int i_p2;
    int i_p1;
    int i_pV;
    {
        int v_1 = z->c;
        z->bra = z->c;
        do {
            if (in_grouping(z, g_elision_char, 99, 122, 0)) goto lab1;
            break;
        lab1:
            if (!(eq_s(z, 2, s_0))) goto lab0;
        } while (0);
        if (z->c == z->l || z->p[z->c] != '\'') goto lab0;
        z->c++;
        z->ket = z->c;
        if (z->c >= z->l) goto lab0;
        {
            int ret = slice_del(z);
            if (ret < 0) return ret;
        }
    lab0:
        z->c = v_1;
    }
    {
        int v_2 = z->c;
        while (1) {
            int v_3 = z->c;
            while (1) {
                int v_4 = z->c;
                do {
                    int v_5 = z->c;
                    if (in_grouping(z, g_v, 97, 251, 0)) goto lab5;
                    z->bra = z->c;
                    do {
                        int v_6 = z->c;
                        if (z->c == z->l || z->p[z->c] != 'u') goto lab6;
                        z->c++;
                        z->ket = z->c;
                        if (in_grouping(z, g_v, 97, 251, 0)) goto lab6;
                        {
                            int ret = slice_from_s(z, 1, s_1);
                            if (ret < 0) return ret;
                        }
                        break;
                    lab6:
                        z->c = v_6;
                        if (z->c == z->l || z->p[z->c] != 'i') goto lab7;
                        z->c++;
                        z->ket = z->c;
                        if (in_grouping(z, g_v, 97, 251, 0)) goto lab7;
                        {
                            int ret = slice_from_s(z, 1, s_2);
                            if (ret < 0) return ret;
                        }
                        break;
                    lab7:
                        z->c = v_6;
                        if (z->c == z->l || z->p[z->c] != 'y') goto lab5;
                        z->c++;
                        z->ket = z->c;
                        {
                            int ret = slice_from_s(z, 1, s_3);
                            if (ret < 0) return ret;
                        }
                    } while (0);
                    break;
                lab5:
                    z->c = v_5;
                    z->bra = z->c;
                    if (z->c == z->l || z->p[z->c] != 0xEB) goto lab8;
                    z->c++;
                    z->ket = z->c;
                    {
                        int ret = slice_from_s(z, 2, s_4);
                        if (ret < 0) return ret;
                    }
                    break;
                lab8:
                    z->c = v_5;
                    z->bra = z->c;
                    if (z->c == z->l || z->p[z->c] != 0xEF) goto lab9;
                    z->c++;
                    z->ket = z->c;
                    {
                        int ret = slice_from_s(z, 2, s_5);
                        if (ret < 0) return ret;
                    }
                    break;
                lab9:
                    z->c = v_5;
                    z->bra = z->c;
                    if (z->c == z->l || z->p[z->c] != 'y') goto lab10;
                    z->c++;
                    z->ket = z->c;
                    if (in_grouping(z, g_v, 97, 251, 0)) goto lab10;
                    {
                        int ret = slice_from_s(z, 1, s_3);
                        if (ret < 0) return ret;
                    }
                    break;
                lab10:
                    z->c = v_5;
                    if (z->c == z->l || z->p[z->c] != 'q') goto lab4;
                    z->c++;
                    z->bra = z->c;
                    if (z->c == z->l || z->p[z->c] != 'u') goto lab4;
                    z->c++;
                    z->ket = z->c;
                    {
                        int ret = slice_from_s(z, 1, s_1);
                        if (ret < 0) return ret;
                    }
                } while (0);
                z->c = v_4;
                break;
            lab4:
                z->c = v_4;
                if (z->c >= z->l) goto lab3;
                z->c++;
            }
            continue;
        lab3:
            z->c = v_3;
            break;
        }
        z->c = v_2;
    }
    i_pV = z->l;
    i_p1 = z->l;
    i_p2 = z->l;
    {
        int v_7 = z->c;
        do {
            int v_8 = z->c;
            if (in_grouping(z, g_v, 97, 251, 0)) goto lab13;
            if (in_grouping(z, g_v, 97, 251, 0)) goto lab13;
            if (z->c >= z->l) goto lab13;
            z->c++;
            break;
        lab13:
            z->c = v_8;
            if (z->c + 1 >= z->l || z->p[z->c + 1] >> 5 != 3 || !((33282 >> (z->p[z->c + 1] & 0x1f)) & 1)) goto lab14;
            among_var = find_among(z, a_0);
            if (!among_var) goto lab14;
            switch (among_var) {
                case 1:
                    if (in_grouping(z, g_v, 97, 251, 0)) goto lab14;
                    break;
            }
            break;
        lab14:
            z->c = v_8;
            if (z->c >= z->l) goto lab12;
            z->c++;
            {
                int ret = out_grouping(z, g_v, 97, 251, 1);
                if (ret < 0) goto lab12;
                z->c += ret;
            }
        } while (0);
        i_pV = z->c;
    lab12:
        z->c = v_7;
    }
    {
        int v_9 = z->c;
        {
            int ret = out_grouping(z, g_v, 97, 251, 1);
            if (ret < 0) goto lab15;
            z->c += ret;
        }
        {
            int ret = in_grouping(z, g_v, 97, 251, 1);
            if (ret < 0) goto lab15;
            z->c += ret;
        }
        i_p1 = z->c;
        {
            int ret = out_grouping(z, g_v, 97, 251, 1);
            if (ret < 0) goto lab15;
            z->c += ret;
        }
        {
            int ret = in_grouping(z, g_v, 97, 251, 1);
            if (ret < 0) goto lab15;
            z->c += ret;
        }
        i_p2 = z->c;
    lab15:
        z->c = v_9;
    }
    z->lb = z->c; z->c = z->l;
    {
        int v_10 = z->l - z->c;
        do {
            int v_11 = z->l - z->c;
            {
                int v_12 = z->l - z->c;
                do {
                    int v_13 = z->l - z->c;
                    z->ket = z->c;
                    among_var = find_among_b(z, a_4);
                    if (!among_var) goto lab18;
                    z->bra = z->c;
                    switch (among_var) {
                        case 1:
                            if (i_p2 > z->c) goto lab18;
                            {
                                int ret = slice_del(z);
                                if (ret < 0) return ret;
                            }
                            break;
                        case 2:
                            if (i_p2 > z->c) goto lab18;
                            {
                                int ret = slice_del(z);
                                if (ret < 0) return ret;
                            }
                            {
                                int v_14 = z->l - z->c;
                                z->ket = z->c;
                                if (!(eq_s_b(z, 2, s_6))) { z->c = z->l - v_14; goto lab19; }
                                z->bra = z->c;
                                do {
                                    int v_15 = z->l - z->c;
                                    if (i_p2 > z->c) goto lab20;
                                    {
                                        int ret = slice_del(z);
                                        if (ret < 0) return ret;
                                    }
                                    break;
                                lab20:
                                    z->c = z->l - v_15;
                                    {
                                        int ret = slice_from_s(z, 3, s_7);
                                        if (ret < 0) return ret;
                                    }
                                } while (0);
                            lab19:
                                ;
                            }
                            break;
                        case 3:
                            if (i_p2 > z->c) goto lab18;
                            {
                                int ret = slice_from_s(z, 3, s_8);
                                if (ret < 0) return ret;
                            }
                            break;
                        case 4:
                            if (i_p2 > z->c) goto lab18;
                            {
                                int ret = slice_from_s(z, 1, s_9);
                                if (ret < 0) return ret;
                            }
                            break;
                        case 5:
                            if (i_p2 > z->c) goto lab18;
                            {
                                int ret = slice_from_s(z, 3, s_10);
                                if (ret < 0) return ret;
                            }
                            break;
                        case 6:
                            if (i_pV > z->c) goto lab18;
                            {
                                int ret = slice_del(z);
                                if (ret < 0) return ret;
                            }
                            {
                                int v_16 = z->l - z->c;
                                z->ket = z->c;
                                among_var = find_among_b(z, a_2);
                                if (!among_var) { z->c = z->l - v_16; goto lab21; }
                                z->bra = z->c;
                                switch (among_var) {
                                    case 1:
                                        if (i_p2 > z->c) { z->c = z->l - v_16; goto lab21; }
                                        {
                                            int ret = slice_del(z);
                                            if (ret < 0) return ret;
                                        }
                                        z->ket = z->c;
                                        if (!(eq_s_b(z, 2, s_11))) { z->c = z->l - v_16; goto lab21; }
                                        z->bra = z->c;
                                        if (i_p2 > z->c) { z->c = z->l - v_16; goto lab21; }
                                        {
                                            int ret = slice_del(z);
                                            if (ret < 0) return ret;
                                        }
                                        break;
                                    case 2:
                                        do {
                                            int v_17 = z->l - z->c;
                                            if (i_p2 > z->c) goto lab22;
                                            {
                                                int ret = slice_del(z);
                                                if (ret < 0) return ret;
                                            }
                                            break;
                                        lab22:
                                            z->c = z->l - v_17;
                                            if (i_p1 > z->c) { z->c = z->l - v_16; goto lab21; }
                                            {
                                                int ret = slice_from_s(z, 3, s_12);
                                                if (ret < 0) return ret;
                                            }
                                        } while (0);
                                        break;
                                    case 3:
                                        if (i_p2 > z->c) { z->c = z->l - v_16; goto lab21; }
                                        {
                                            int ret = slice_del(z);
                                            if (ret < 0) return ret;
                                        }
                                        break;
                                    case 4:
                                        if (i_pV > z->c) { z->c = z->l - v_16; goto lab21; }
                                        {
                                            int ret = slice_from_s(z, 1, s_6);
                                            if (ret < 0) return ret;
                                        }
                                        break;
                                }
                            lab21:
                                ;
                            }
                            break;
                        case 7:
                            if (i_p2 > z->c) goto lab18;
                            {
                                int ret = slice_del(z);
                                if (ret < 0) return ret;
                            }
                            {
                                int v_18 = z->l - z->c;
                                z->ket = z->c;
                                if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((4198408 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->c = z->l - v_18; goto lab23; }
                                among_var = find_among_b(z, a_3);
                                if (!among_var) { z->c = z->l - v_18; goto lab23; }
                                z->bra = z->c;
                                switch (among_var) {
                                    case 1:
                                        do {
                                            int v_19 = z->l - z->c;
                                            if (i_p2 > z->c) goto lab24;
                                            {
                                                int ret = slice_del(z);
                                                if (ret < 0) return ret;
                                            }
                                            break;
                                        lab24:
                                            z->c = z->l - v_19;
                                            {
                                                int ret = slice_from_s(z, 3, s_13);
                                                if (ret < 0) return ret;
                                            }
                                        } while (0);
                                        break;
                                    case 2:
                                        do {
                                            int v_20 = z->l - z->c;
                                            if (i_p2 > z->c) goto lab25;
                                            {
                                                int ret = slice_del(z);
                                                if (ret < 0) return ret;
                                            }
                                            break;
                                        lab25:
                                            z->c = z->l - v_20;
                                            {
                                                int ret = slice_from_s(z, 3, s_7);
                                                if (ret < 0) return ret;
                                            }
                                        } while (0);
                                        break;
                                    case 3:
                                        if (i_p2 > z->c) { z->c = z->l - v_18; goto lab23; }
                                        {
                                            int ret = slice_del(z);
                                            if (ret < 0) return ret;
                                        }
                                        break;
                                }
                            lab23:
                                ;
                            }
                            break;
                        case 8:
                            if (i_p2 > z->c) goto lab18;
                            {
                                int ret = slice_del(z);
                                if (ret < 0) return ret;
                            }
                            {
                                int v_21 = z->l - z->c;
                                z->ket = z->c;
                                if (!(eq_s_b(z, 2, s_11))) { z->c = z->l - v_21; goto lab26; }
                                z->bra = z->c;
                                if (i_p2 > z->c) { z->c = z->l - v_21; goto lab26; }
                                {
                                    int ret = slice_del(z);
                                    if (ret < 0) return ret;
                                }
                                z->ket = z->c;
                                if (!(eq_s_b(z, 2, s_6))) { z->c = z->l - v_21; goto lab26; }
                                z->bra = z->c;
                                do {
                                    int v_22 = z->l - z->c;
                                    if (i_p2 > z->c) goto lab27;
                                    {
                                        int ret = slice_del(z);
                                        if (ret < 0) return ret;
                                    }
                                    break;
                                lab27:
                                    z->c = z->l - v_22;
                                    {
                                        int ret = slice_from_s(z, 3, s_7);
                                        if (ret < 0) return ret;
                                    }
                                } while (0);
                            lab26:
                                ;
                            }
                            break;
                        case 9:
                            {
                                int ret = slice_from_s(z, 3, s_14);
                                if (ret < 0) return ret;
                            }
                            break;
                        case 10:
                            if (i_p1 > z->c) goto lab18;
                            {
                                int ret = slice_from_s(z, 2, s_15);
                                if (ret < 0) return ret;
                            }
                            break;
                        case 11:
                            if (in_grouping_b(z, g_oux_ending, 98, 112, 0)) goto lab18;
                            {
                                int ret = slice_from_s(z, 2, s_16);
                                if (ret < 0) return ret;
                            }
                            break;
                        case 12:
                            do {
                                int v_23 = z->l - z->c;
                                if (i_p2 > z->c) goto lab28;
                                {
                                    int ret = slice_del(z);
                                    if (ret < 0) return ret;
                                }
                                break;
                            lab28:
                                z->c = z->l - v_23;
                                if (i_p1 > z->c) goto lab18;
                                {
                                    int ret = slice_from_s(z, 3, s_12);
                                    if (ret < 0) return ret;
                                }
                            } while (0);
                            break;
                        case 13:
                            if (i_p1 > z->c) goto lab18;
                            if (out_grouping_b(z, g_v, 97, 251, 0)) goto lab18;
                            {
                                int ret = slice_del(z);
                                if (ret < 0) return ret;
                            }
                            break;
                        case 14:
                            if (i_pV > z->c) goto lab18;
                            {
                                int ret = slice_from_s(z, 3, s_17);
                                if (ret < 0) return ret;
                            }
                            goto lab18;
                            break;
                        case 15:
                            if (i_pV > z->c) goto lab18;
                            {
                                int ret = slice_from_s(z, 3, s_10);
                                if (ret < 0) return ret;
                            }
                            goto lab18;
                            break;
                        case 16:
                            {
                                int v_24 = z->l - z->c;
                                if (in_grouping_b(z, g_v, 97, 251, 0)) goto lab18;
                                if (i_pV > z->c) goto lab18;
                                z->c = z->l - v_24;
                            }
                            {
                                int ret = slice_del(z);
                                if (ret < 0) return ret;
                            }
                            goto lab18;
                            break;
                    }
                    break;
                lab18:
                    z->c = z->l - v_13;
                    {
                        int v_25;
                        if (z->c < i_pV) goto lab29;
                        v_25 = z->lb; z->lb = i_pV;
                        z->ket = z->c;
                        if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((68944418 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = v_25; goto lab29; }
                        if (!find_among_b(z, a_5)) { z->lb = v_25; goto lab29; }
                        z->bra = z->c;
                        if (z->c <= z->lb || z->p[z->c - 1] != 'H') goto lab30;
                        z->c--;
                        { z->lb = v_25; goto lab29; }
                    lab30:
                        if (out_grouping_b(z, g_v, 97, 251, 0)) { z->lb = v_25; goto lab29; }
                        {
                            int ret = slice_del(z);
                            if (ret < 0) return ret;
                        }
                        z->lb = v_25;
                    }
                    break;
                lab29:
                    z->c = z->l - v_13;
                    {
                        int v_26;
                        if (z->c < i_pV) goto lab17;
                        v_26 = z->lb; z->lb = i_pV;
                        z->ket = z->c;
                        among_var = find_among_b(z, a_7);
                        if (!among_var) { z->lb = v_26; goto lab17; }
                        z->bra = z->c;
                        z->lb = v_26;
                    }
                    switch (among_var) {
                        case 1:
                            if (i_p2 > z->c) goto lab17;
                            {
                                int ret = slice_del(z);
                                if (ret < 0) return ret;
                            }
                            break;
                        case 2:
                            {
                                int ret = slice_del(z);
                                if (ret < 0) return ret;
                            }
                            break;
                        case 3:
                            {
                                int v_27 = z->l - z->c;
                                if (z->c <= z->lb || z->p[z->c - 1] != 'e') { z->c = z->l - v_27; goto lab31; }
                                z->c--;
                                if (i_pV > z->c) { z->c = z->l - v_27; goto lab31; }
                                z->bra = z->c;
                            lab31:
                                ;
                            }
                            {
                                int ret = slice_del(z);
                                if (ret < 0) return ret;
                            }
                            break;
                        case 4:
                            {
                                int v_28 = z->l - z->c;
                                if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 108 && z->p[z->c - 1] != 118)) goto lab32;
                                among_var = find_among_b(z, a_6);
                                if (!among_var) goto lab32;
                                switch (among_var) {
                                    case 1:
                                        if (z->c <= z->lb) goto lab32;
                                        z->c--;
                                        if (z->c > z->lb) goto lab32;
                                        break;
                                }
                                goto lab17;
                            lab32:
                                z->c = z->l - v_28;
                            }
                            {
                                int ret = slice_del(z);
                                if (ret < 0) return ret;
                            }
                            break;
                    }
                } while (0);
                z->c = z->l - v_12;
                {
                    int v_29 = z->l - z->c;
                    z->ket = z->c;
                    do {
                        int v_30 = z->l - z->c;
                        if (z->c <= z->lb || z->p[z->c - 1] != 'Y') goto lab34;
                        z->c--;
                        z->bra = z->c;
                        {
                            int ret = slice_from_s(z, 1, s_6);
                            if (ret < 0) return ret;
                        }
                        break;
                    lab34:
                        z->c = z->l - v_30;
                        if (z->c <= z->lb || z->p[z->c - 1] != 0xE7) { z->c = z->l - v_29; goto lab33; }
                        z->c--;
                        z->bra = z->c;
                        {
                            int ret = slice_from_s(z, 1, s_18);
                            if (ret < 0) return ret;
                        }
                    } while (0);
                lab33:
                    ;
                }
            }
            break;
        lab17:
            z->c = z->l - v_11;
            {
                int v_31 = z->l - z->c;
                z->ket = z->c;
                if (z->c <= z->lb || z->p[z->c - 1] != 's') { z->c = z->l - v_31; goto lab35; }
                z->c--;
                z->bra = z->c;
                {
                    int v_32 = z->l - z->c;
                    do {
                        if (!(eq_s_b(z, 2, s_5))) goto lab36;
                        break;
                    lab36:
                        if (out_grouping_b(z, g_keep_with_s, 97, 232, 0)) { z->c = z->l - v_31; goto lab35; }
                    } while (0);
                    z->c = z->l - v_32;
                }
                {
                    int ret = slice_del(z);
                    if (ret < 0) return ret;
                }
            lab35:
                ;
            }
            {
                int v_33;
                if (z->c < i_pV) goto lab16;
                v_33 = z->lb; z->lb = i_pV;
                z->ket = z->c;
                if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((278560 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = v_33; goto lab16; }
                among_var = find_among_b(z, a_8);
                if (!among_var) { z->lb = v_33; goto lab16; }
                z->bra = z->c;
                switch (among_var) {
                    case 1:
                        if (i_p2 > z->c) { z->lb = v_33; goto lab16; }
                        do {
                            if (z->c <= z->lb || z->p[z->c - 1] != 's') goto lab37;
                            z->c--;
                            break;
                        lab37:
                            if (z->c <= z->lb || z->p[z->c - 1] != 't') { z->lb = v_33; goto lab16; }
                            z->c--;
                        } while (0);
                        {
                            int ret = slice_del(z);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 2:
                        {
                            int ret = slice_from_s(z, 1, s_6);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 3:
                        {
                            int ret = slice_del(z);
                            if (ret < 0) return ret;
                        }
                        break;
                }
                z->lb = v_33;
            }
        } while (0);
    lab16:
        z->c = z->l - v_10;
    }
    {
        int v_34 = z->l - z->c;
        {
            int v_35 = z->l - z->c;
            if (z->c - 2 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1069056 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab38;
            if (!find_among_b(z, a_9)) goto lab38;
            z->c = z->l - v_35;
        }
        z->ket = z->c;
        if (z->c <= z->lb) goto lab38;
        z->c--;
        z->bra = z->c;
        {
            int ret = slice_del(z);
            if (ret < 0) return ret;
        }
    lab38:
        z->c = z->l - v_34;
    }
    {
        int v_36 = z->l - z->c;
        {
            int v_37 = 1;
            while (1) {
                if (out_grouping_b(z, g_v, 97, 251, 0)) goto lab40;
                v_37--;
                continue;
            lab40:
                break;
            }
            if (v_37 > 0) goto lab39;
        }
        z->ket = z->c;
        do {
            if (z->c <= z->lb || z->p[z->c - 1] != 0xE9) goto lab41;
            z->c--;
            break;
        lab41:
            if (z->c <= z->lb || z->p[z->c - 1] != 0xE8) goto lab39;
            z->c--;
        } while (0);
        z->bra = z->c;
        {
            int ret = slice_from_s(z, 1, s_10);
            if (ret < 0) return ret;
        }
    lab39:
        z->c = z->l - v_36;
    }
    z->c = z->lb;
    {
        int v_38 = z->c;
        while (1) {
            int v_39 = z->c;
            z->bra = z->c;
            if (z->c >= z->l || z->p[z->c + 0] >> 5 != 2 || !((35652352 >> (z->p[z->c + 0] & 0x1f)) & 1)) among_var = 7; else
            among_var = find_among(z, a_1);
            z->ket = z->c;
            switch (among_var) {
                case 1:
                    {
                        int ret = slice_from_s(z, 1, s_6);
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    {
                        int ret = slice_from_s(z, 1, s_9);
                        if (ret < 0) return ret;
                    }
                    break;
                case 3:
                    {
                        int ret = slice_from_s(z, 1, s_19);
                        if (ret < 0) return ret;
                    }
                    break;
                case 4:
                    {
                        int ret = slice_from_s(z, 1, s_20);
                        if (ret < 0) return ret;
                    }
                    break;
                case 5:
                    {
                        int ret = slice_from_s(z, 1, s_21);
                        if (ret < 0) return ret;
                    }
                    break;
                case 6:
                    {
                        int ret = slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
                case 7:
                    if (z->c >= z->l) goto lab43;
                    z->c++;
                    break;
            }
            continue;
        lab43:
            z->c = v_39;
            break;
        }
        z->c = v_38;
    }
    return 1;
}
