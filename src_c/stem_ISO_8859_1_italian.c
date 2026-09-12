/* Generated from italian.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_ISO_8859_1_italian.h"

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
extern int italian_ISO_8859_1_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif

#define s_6 (s_5 + 1)
static const symbol s_0[] = { 0xE0 };
static const symbol s_1[] = { 0xE8 };
static const symbol s_2[] = { 0xEC };
static const symbol s_3[] = { 0xF2 };
static const symbol s_4[] = { 0xF9 };
static const symbol s_5[] = { 'q', 'U' };
static const symbol s_7[] = { 'I' };
static const symbol s_8[] = { 'd', 'i', 'v', 'a', 'n' };
static const symbol s_9[] = { 'e', 'n', 't', 'e' };
static const symbol s_10[] = { 'i', 'c' };
static const symbol s_11[] = { 'l', 'o', 'g' };
static const symbol s_12[] = { 'u' };
static const symbol s_13[] = { 'a', 't' };

static const unsigned short a_0[] = {
    0x0000 , 0x7661 , 0x0018 , 0x0000 , 0x0000 , 0x001D , 0x0000 , 0x0000 ,
    0x005E , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0062 , 0x0062 , 0x0065 ,
    0x0000 , 0x0000 , 0x006A , 0x0000 , 0x0076 , 0x007A , 0x0083 , 0x0062 ,
    0x0000 , 0x0003 , 0xC001 , S(6C6C), S(0027), 0x0000 , 0x6527 , 0xC001 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0018 , 0x0000 , 0x0000 , 0x0000 , 0x0018 , 0x0000 , 0x0002 ,
    0xC001 , S(276C), 0x0000 , 0x2727 , 0xC001 , 0x0000 , 0x0004 , 0xC001 ,
    S(6C65), S(276C), 0x0000 , 0x0002 , 0x006E , S(6575), 0x0000 , 0x6C73 ,
    0x005E , 0x0072 , 0x0000 , 0x0002 , 0xC001 , S(2774), 0x0000 , 0x2775 ,
    0xC001 , 0x0018 , 0x0000 , 0x2775 , 0xC001 , 0x007E , 0x0000 , 0x0003 ,
    0xC001 , S(7474), S(0027), 0x0000 , 0x0002 , 0xC001 , S(276E)
};

static const unsigned short a_1[] = {
    0x0007 , 0xFA71 , 0x008C , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
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
    0x0000 , 0x0000 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0xFFFE , 0x0000 , 0x0000 , 0x0000 , 0xFFFD , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFC , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0xFFFB , 0x0000 , 0x7575 , 0xFFFA
};

static const unsigned short a_2[] = {
    0x0003 , 0x4955 , 0xFFFF , 0xFFFE
};

static const unsigned short a_3[] = {
    0x0000 , 0x6F61 , 0x0011 , 0x0000 , 0x0000 , 0x0000 , 0x0031 , 0x0000 ,
    0x0000 , 0x0000 , 0x0067 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0081 , 0x0000 , 0x6C6C , 0x0014 , 0x3FFF , 0x6565 , 0x0017 , 0x0000 ,
    0x7663 , 0xC001 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x002D ,
    0x0000 , 0x0000 , 0x0000 , 0xC001 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0xC001 , 0x0000 , 0xC001 , 0x0000 , 0x0002 , 0xC001 ,
    S(6C67), 0x0000 , 0x6C6E , 0x0035 , 0x004E , 0x3FFF , 0x6565 , 0x0038 ,
    0x0000 , 0x7663 , 0xC001 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x002D , 0x0000 , 0x0000 , 0x0000 , 0xC001 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0xC001 , 0x0000 , 0xC001 , 0x3FFF , 0x6565 ,
    0x0051 , 0x0000 , 0x7663 , 0xC001 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x002D , 0x0000 , 0x0000 , 0x0000 , 0xC001 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0xC001 , 0xC001 , 0x0000 , 0xC001 , 0x0000 ,
    0x7663 , 0xC001 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x007D , 0xC001 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0xC001 , 0xC001 , 0x0000 , 0xC001 , 0x3FFF , 0x6567 , 0x0038 ,
    0xC001 , 0x0000 , 0x6C6C , 0x0084 , 0x3FFF , 0x6565 , 0x0038
};

static const unsigned short a_4[] = {
    0x0000 , 0x6F72 , 0x0004 , 0x000C , 0x0000 , 0x0002 , 0x0008 , S(646E),
    0x0000 , 0x6165 , 0xFFFF , 0xFFFF , 0x0000 , 0x6961 , 0xFFFE , 0x0000 ,
    0x0000 , 0x0000 , 0xFFFE , 0x0000 , 0x0000 , 0x0000 , 0xFFFE
};

static const unsigned short a_5[] = {
    0x0000 , 0x7663 , 0x0016 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0019 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x001E , 0x0000 , 0x0000 , 0x0021 , 0x0000 , 0x6969 ,
    0xC001 , 0x0000 , 0x0003 , 0xC001 , S(6261), S(0069), 0x0000 , 0x6F6F ,
    0xC001 , 0x0000 , 0x6969 , 0xFFFF
};

static const unsigned short a_6[] = {
    0x0000 , 0x7663 , 0x0016 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0019 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0016 , 0x0000 , 0x6969 ,
    0xFFFF , 0x0000 , 0x0003 , 0xFFFF , S(6261), S(0069)
};

static const unsigned short a_7[] = {
    0x0000 , 0xEC61 , 0x008E , 0x0000 , 0x0000 , 0x0000 , 0x00C1 , 0x0000 ,
    0x0000 , 0x0000 , 0x0114 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0148 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
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
    0x0000 , 0x0163 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x016A , 0x0000 , 0x0000 , 0x0000 , 0x016A , 0x0000 , 0x7A63 ,
    0x00A8 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00AB , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x00B0 , 0x00B3 , 0x0000 , 0x00B7 , 0x0000 , 0x0000 , 0x0000 , 0x00BA ,
    0x0000 , 0x6969 , 0xFFFF , 0x0000 , 0x0003 , 0xFFFD , S(6F6C), S(0067),
    0x0000 , 0x6F6F , 0xFFFF , 0x0000 , 0x0002 , 0xFFFF , S(7369), 0x0000 ,
    0x6969 , 0xFFF7 , 0x0000 , 0x6E6E , 0x00BD , 0x0000 , 0x6165 , 0xFFFF ,
    0xFFFB , 0x0000 , 0x7A63 , 0x00DB , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x00E3 , 0x00AB , 0x0000 , 0x0000 , 0x00E7 , 0x0000 , 0x00EF , 0x0000 ,
    0x0000 , 0x0000 , 0x00FE , 0x00B0 , 0x0103 , 0x0000 , 0x00B7 , 0x0000 ,
    0x0000 , 0x0000 , 0x0111 , 0x0000 , 0x6969 , 0x00DE , 0x0001 , 0x0003 ,
    0xFFFF , S(7461), S(0072), 0x0000 , 0x0002 , 0xFFFF , S(6369), 0x0000 ,
    0x0002 , 0x00EB , S(6962), 0x0000 , 0x6169 , 0xFFFF , 0xFFFF , 0x0000 ,
    0x0002 , 0x00F3 , S(6F69), 0x0000 , 0x737A , 0x00F7 , 0x00FA , 0x0000 ,
    0x7575 , 0xFFFC , 0x0000 , 0x6175 , 0xFFFE , 0xFFFC , 0x0000 , 0x0003 ,
    0xFFFE , S(7461), S(006F), 0x0000 , 0x6E73 , 0x0107 , 0x00A8 , 0x0000 ,
    0x6165 , 0xFFFF , 0x010B , 0x0000 , 0x6D6D , 0x010E , 0x0001 , 0x6161 ,
    0xFFF9 , 0x0000 , 0x6E6E , 0x00BD , 0x0000 , 0x7663 , 0x012A , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x00E3 , 0x0000 , 0x0000 , 0x0000 , 0x012D ,
    0x00B3 , 0x0131 , 0x0000 , 0x0000 , 0x0000 , 0x00FE , 0x00B0 , 0x0139 ,
    0x0000 , 0x00B7 , 0x0000 , 0x6969 , 0x00DE , 0x0000 , 0x0002 , 0x00EB ,
    S(6962), 0x0000 , 0x0002 , 0x0135 , S(6F69), 0x0000 , 0x737A , 0x00F7 ,
    0x00FA , 0x0000 , 0x6E73 , 0x013D , 0x00A8 , 0x0000 , 0x6165 , 0xFFFF ,
    0x0141 , 0x0000 , 0x6D6D , 0x0144 , 0x0000 , 0x6169 , 0xFFFA , 0xFFFA ,
    0x0000 , 0x7663 , 0x00A8 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00B3 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x00B0 , 0x015E , 0x0000 , 0x00B7 , 0x0000 , 0x0003 ,
    0x0144 , S(656D), S(006E), 0x0000 , 0x7474 , 0x0166 , 0x0000 , 0x6973 ,
    0xFFF8 , 0x00A8 , 0x0000 , 0x0003 , 0xFFFF , S(7369), S(0074)
};

static const unsigned short a_8[] = {
    0x0000 , 0xF261 , 0x0094 , 0x0000 , 0x0000 , 0x0000 , 0x00D4 , 0x0000 ,
    0x0000 , 0x0000 , 0x0117 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0149 , 0x0000 , 0x0000 , 0x01D1 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
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
    0x0000 , 0x012F , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x012F , 0x0000 , 0x7663 , 0x00AA , 0x00AE ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00B2 ,
    0x0000 , 0x00C9 , 0x0000 , 0x0002 , 0xFFFF , S(7369), 0x0000 , 0x0002 ,
    0xFFFF , S(6E65), 0x0000 , 0x7561 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0xFFFF , 0x0000 , 0x6961 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0xFFFF ,
    0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0000 , 0x7462 , 0x00E9 , 0x00AA ,
    0x00AE , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00C9 , 0x00F2 ,
    0x00F6 , 0x0000 , 0x0003 , 0x00EE , S(6572), S(0062), 0x0000 , 0x6569 ,
    0xFFFF , 0xFFFF , 0x0000 , 0x0002 , 0xFFFF , S(7361), 0x0000 , 0x7561 ,
    0x010D , 0x0000 , 0x0000 , 0x0000 , 0x0110 , 0x0000 , 0x0000 , 0x0000 ,
    0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0113 , 0x0000 , 0xFFFF , 0x0001 , 0x7676 , 0x00C9 ,
    0x0001 , 0x7272 , 0x00EE , 0x0000 , 0x0002 , 0x00EE , S(6572), 0x0000 ,
    0x7661 , 0x012F , 0x0000 , 0x00AA , 0x00AE , 0x012F , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x00F2 , 0x0132 , 0x0000 , 0x00C9 , 0x0000 ,
    0x7272 , 0x00EE , 0x0000 , 0x7561 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0113 , 0x0000 ,
    0xFFFF , 0x0000 , 0x7663 , 0x00AA , 0x015F , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0166 , 0x01A5 , 0x0000 ,
    0x0000 , 0x0000 , 0x01C2 , 0x0000 , 0x00B2 , 0x0000 , 0x00C9 , 0x0000 ,
    0x6E6E , 0x0162 , 0x0000 , 0x6165 , 0xFFFF , 0xFFFF , 0x0000 , 0x6D61 ,
    0x0175 , 0x0000 , 0x0000 , 0x0000 , 0x012F , 0x0000 , 0x0000 , 0x0000 ,
    0x0195 , 0x0000 , 0x0000 , 0x0000 , 0x019A , 0x0000 , 0x7659 , 0xFFFF ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFF ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00C9 , 0x0000 , 0x0003 , 0xFFFF ,
    S(7361), S(0073), 0x0000 , 0x6961 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 ,
    0x0110 , 0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0000 , 0x6F61 , 0x01B6 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x01BA , 0x01BE , 0x0001 , 0x6376 ,
    0x00AA , 0x00C9 , 0x0000 , 0x0002 , 0x00EE , S(6172), 0x0001 , 0x6372 ,
    0x00AA , 0x00C9 , 0x0000 , 0x6565 , 0x01C5 , 0x0000 , 0x6273 , 0x01C9 ,
    0x01CE , 0x0000 , 0x0003 , 0x00EE , S(6572), S(0062), 0x0000 , 0x7373 ,
    0x00C9 , 0x0000 , 0x6169 , 0xFFFF , 0xFFFF
};

static const unsigned char g_v[] = { 17, 65, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 128, 8, 2, 1 };

static const unsigned char g_AEIO[] = { 17, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 128, 8, 2 };

static const unsigned char g_CG[] = { 17 };

extern int italian_ISO_8859_1_stem(struct SN_env * z) {
    int among_var;
    int i_p2;
    int i_p1;
    int i_pV;
    {
        int v_1 = z->c;
        z->bra = z->c;
        if (!find_among(z, a_0)) goto lab0;
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
        {
            int v_3 = z->c;
            while (1) {
                int v_4 = z->c;
                z->bra = z->c;
                among_var = find_among(z, a_1);
                z->ket = z->c;
                switch (among_var) {
                    case 1:
                        {
                            int ret = slice_from_s(z, 1, s_0);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 2:
                        {
                            int ret = slice_from_s(z, 1, s_1);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 3:
                        {
                            int ret = slice_from_s(z, 1, s_2);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 4:
                        {
                            int ret = slice_from_s(z, 1, s_3);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 5:
                        {
                            int ret = slice_from_s(z, 1, s_4);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 6:
                        {
                            int ret = slice_from_s(z, 2, s_5);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 7:
                        if (z->c >= z->l) goto lab2;
                        z->c++;
                        break;
                }
                continue;
            lab2:
                z->c = v_4;
                break;
            }
            z->c = v_3;
        }
        while (1) {
            int v_5 = z->c;
            while (1) {
                int v_6 = z->c;
                if (in_grouping(z, g_v, 97, 249, 0)) goto lab4;
                z->bra = z->c;
                do {
                    int v_7 = z->c;
                    if (z->c == z->l || z->p[z->c] != 'u') goto lab5;
                    z->c++;
                    z->ket = z->c;
                    if (in_grouping(z, g_v, 97, 249, 0)) goto lab5;
                    {
                        int ret = slice_from_s(z, 1, s_6);
                        if (ret < 0) return ret;
                    }
                    break;
                lab5:
                    z->c = v_7;
                    if (z->c == z->l || z->p[z->c] != 'i') goto lab4;
                    z->c++;
                    z->ket = z->c;
                    if (in_grouping(z, g_v, 97, 249, 0)) goto lab4;
                    {
                        int ret = slice_from_s(z, 1, s_7);
                        if (ret < 0) return ret;
                    }
                } while (0);
                z->c = v_6;
                break;
            lab4:
                z->c = v_6;
                if (z->c >= z->l) goto lab3;
                z->c++;
            }
            continue;
        lab3:
            z->c = v_5;
            break;
        }
        z->c = v_2;
    }
    i_pV = z->l;
    i_p1 = z->l;
    i_p2 = z->l;
    {
        int v_8 = z->c;
        do {
            int v_9 = z->c;
            if (in_grouping(z, g_v, 97, 249, 0)) goto lab8;
            do {
                int v_10 = z->c;
                if (out_grouping(z, g_v, 97, 249, 0)) goto lab9;
                {
                    int ret = out_grouping(z, g_v, 97, 249, 1);
                    if (ret < 0) goto lab9;
                    z->c += ret;
                }
                break;
            lab9:
                z->c = v_10;
                if (in_grouping(z, g_v, 97, 249, 0)) goto lab8;
                {
                    int ret = in_grouping(z, g_v, 97, 249, 1);
                    if (ret < 0) goto lab8;
                    z->c += ret;
                }
            } while (0);
            break;
        lab8:
            z->c = v_9;
            if (!(eq_s(z, 5, s_8))) goto lab10;
            break;
        lab10:
            if (out_grouping(z, g_v, 97, 249, 0)) goto lab7;
            do {
                int v_11 = z->c;
                if (out_grouping(z, g_v, 97, 249, 0)) goto lab11;
                {
                    int ret = out_grouping(z, g_v, 97, 249, 1);
                    if (ret < 0) goto lab11;
                    z->c += ret;
                }
                break;
            lab11:
                z->c = v_11;
                if (in_grouping(z, g_v, 97, 249, 0)) goto lab7;
                if (z->c >= z->l) goto lab7;
                z->c++;
            } while (0);
        } while (0);
        i_pV = z->c;
    lab7:
        z->c = v_8;
    }
    {
        int v_12 = z->c;
        {
            int ret = out_grouping(z, g_v, 97, 249, 1);
            if (ret < 0) goto lab12;
            z->c += ret;
        }
        {
            int ret = in_grouping(z, g_v, 97, 249, 1);
            if (ret < 0) goto lab12;
            z->c += ret;
        }
        i_p1 = z->c;
        {
            int ret = out_grouping(z, g_v, 97, 249, 1);
            if (ret < 0) goto lab12;
            z->c += ret;
        }
        {
            int ret = in_grouping(z, g_v, 97, 249, 1);
            if (ret < 0) goto lab12;
            z->c += ret;
        }
        i_p2 = z->c;
    lab12:
        z->c = v_12;
    }
    z->lb = z->c; z->c = z->l;
    {
        int v_13 = z->l - z->c;
        z->ket = z->c;
        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((33314 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab13;
        if (!find_among_b(z, a_3)) goto lab13;
        z->bra = z->c;
        if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 111 && z->p[z->c - 1] != 114)) goto lab13;
        among_var = find_among_b(z, a_4);
        if (!among_var) goto lab13;
        if (i_pV > z->c) goto lab13;
        switch (among_var) {
            case 1:
                {
                    int ret = slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {
                    int ret = slice_from_s(z, 1, s_9);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab13:
        z->c = z->l - v_13;
    }
    {
        int v_14 = z->l - z->c;
        do {
            int v_15 = z->l - z->c;
            z->ket = z->c;
            among_var = find_among_b(z, a_7);
            if (!among_var) goto lab15;
            z->bra = z->c;
            switch (among_var) {
                case 1:
                    if (i_p2 > z->c) goto lab15;
                    {
                        int ret = slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    if (i_p2 > z->c) goto lab15;
                    {
                        int ret = slice_del(z);
                        if (ret < 0) return ret;
                    }
                    {
                        int v_16 = z->l - z->c;
                        z->ket = z->c;
                        if (!(eq_s_b(z, 2, s_10))) { z->c = z->l - v_16; goto lab16; }
                        z->bra = z->c;
                        if (i_p2 > z->c) { z->c = z->l - v_16; goto lab16; }
                        {
                            int ret = slice_del(z);
                            if (ret < 0) return ret;
                        }
                    lab16:
                        ;
                    }
                    break;
                case 3:
                    if (i_p2 > z->c) goto lab15;
                    {
                        int ret = slice_from_s(z, 3, s_11);
                        if (ret < 0) return ret;
                    }
                    break;
                case 4:
                    if (i_p2 > z->c) goto lab15;
                    {
                        int ret = slice_from_s(z, 1, s_12);
                        if (ret < 0) return ret;
                    }
                    break;
                case 5:
                    if (i_p2 > z->c) goto lab15;
                    {
                        int ret = slice_from_s(z, 4, s_9);
                        if (ret < 0) return ret;
                    }
                    break;
                case 6:
                    if (i_pV > z->c) goto lab15;
                    {
                        int ret = slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
                case 7:
                    if (i_p1 > z->c) goto lab15;
                    {
                        int ret = slice_del(z);
                        if (ret < 0) return ret;
                    }
                    {
                        int v_17 = z->l - z->c;
                        z->ket = z->c;
                        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((4722696 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->c = z->l - v_17; goto lab17; }
                        among_var = find_among_b(z, a_5);
                        if (!among_var) { z->c = z->l - v_17; goto lab17; }
                        z->bra = z->c;
                        if (i_p2 > z->c) { z->c = z->l - v_17; goto lab17; }
                        {
                            int ret = slice_del(z);
                            if (ret < 0) return ret;
                        }
                        switch (among_var) {
                            case 1:
                                z->ket = z->c;
                                if (!(eq_s_b(z, 2, s_13))) { z->c = z->l - v_17; goto lab17; }
                                z->bra = z->c;
                                if (i_p2 > z->c) { z->c = z->l - v_17; goto lab17; }
                                {
                                    int ret = slice_del(z);
                                    if (ret < 0) return ret;
                                }
                                break;
                        }
                    lab17:
                        ;
                    }
                    break;
                case 8:
                    if (i_p2 > z->c) goto lab15;
                    {
                        int ret = slice_del(z);
                        if (ret < 0) return ret;
                    }
                    {
                        int v_18 = z->l - z->c;
                        z->ket = z->c;
                        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((4198408 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->c = z->l - v_18; goto lab18; }
                        if (!find_among_b(z, a_6)) { z->c = z->l - v_18; goto lab18; }
                        z->bra = z->c;
                        if (i_p2 > z->c) { z->c = z->l - v_18; goto lab18; }
                        {
                            int ret = slice_del(z);
                            if (ret < 0) return ret;
                        }
                    lab18:
                        ;
                    }
                    break;
                case 9:
                    if (i_p2 > z->c) goto lab15;
                    {
                        int ret = slice_del(z);
                        if (ret < 0) return ret;
                    }
                    {
                        int v_19 = z->l - z->c;
                        z->ket = z->c;
                        if (!(eq_s_b(z, 2, s_13))) { z->c = z->l - v_19; goto lab19; }
                        z->bra = z->c;
                        if (i_p2 > z->c) { z->c = z->l - v_19; goto lab19; }
                        {
                            int ret = slice_del(z);
                            if (ret < 0) return ret;
                        }
                        z->ket = z->c;
                        if (!(eq_s_b(z, 2, s_10))) { z->c = z->l - v_19; goto lab19; }
                        z->bra = z->c;
                        if (i_p2 > z->c) { z->c = z->l - v_19; goto lab19; }
                        {
                            int ret = slice_del(z);
                            if (ret < 0) return ret;
                        }
                    lab19:
                        ;
                    }
                    break;
            }
            break;
        lab15:
            z->c = z->l - v_15;
            {
                int v_20;
                if (z->c < i_pV) goto lab14;
                v_20 = z->lb; z->lb = i_pV;
                z->ket = z->c;
                if (!find_among_b(z, a_8)) { z->lb = v_20; goto lab14; }
                z->bra = z->c;
                {
                    int ret = slice_del(z);
                    if (ret < 0) return ret;
                }
                z->lb = v_20;
            }
        } while (0);
    lab14:
        z->c = z->l - v_14;
    }
    {
        int v_21 = z->l - z->c;
        {
            int v_22 = z->l - z->c;
            z->ket = z->c;
            if (in_grouping_b(z, g_AEIO, 97, 242, 0)) { z->c = z->l - v_22; goto lab21; }
            z->bra = z->c;
            if (i_pV > z->c) { z->c = z->l - v_22; goto lab21; }
            {
                int ret = slice_del(z);
                if (ret < 0) return ret;
            }
            z->ket = z->c;
            if (z->c <= z->lb || z->p[z->c - 1] != 'i') { z->c = z->l - v_22; goto lab21; }
            z->c--;
            z->bra = z->c;
            if (i_pV > z->c) { z->c = z->l - v_22; goto lab21; }
            {
                int ret = slice_del(z);
                if (ret < 0) return ret;
            }
        lab21:
            ;
        }
        {
            int v_23 = z->l - z->c;
            z->ket = z->c;
            if (z->c <= z->lb || z->p[z->c - 1] != 'h') { z->c = z->l - v_23; goto lab22; }
            z->c--;
            z->bra = z->c;
            if (in_grouping_b(z, g_CG, 99, 103, 0)) { z->c = z->l - v_23; goto lab22; }
            if (i_pV > z->c) { z->c = z->l - v_23; goto lab22; }
            {
                int ret = slice_del(z);
                if (ret < 0) return ret;
            }
        lab22:
            ;
        }
        z->c = z->l - v_21;
    }
    z->c = z->lb;
    {
        int v_24 = z->c;
        while (1) {
            int v_25 = z->c;
            z->bra = z->c;
            if (z->c >= z->l || (z->p[z->c + 0] != 73 && z->p[z->c + 0] != 85)) among_var = 3; else
            among_var = find_among(z, a_2);
            z->ket = z->c;
            switch (among_var) {
                case 1:
                    {
                        int ret = slice_from_s(z, 1, s_10);
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    {
                        int ret = slice_from_s(z, 1, s_12);
                        if (ret < 0) return ret;
                    }
                    break;
                case 3:
                    if (z->c >= z->l) goto lab24;
                    z->c++;
                    break;
            }
            continue;
        lab24:
            z->c = v_25;
            break;
        }
        z->c = v_24;
    }
    return 1;
}
