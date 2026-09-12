/* Generated from russian.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_KOI8_R_russian.h"

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
extern int russian_KOI8_R_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif

static const symbol s_0[] = { 0xC5 };

static const unsigned short a_0[] = {
    0x0000 , 0xD8C9 , 0x0012 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0016 , 0x001A , 0x0000 , 0x0002 , 0x0016 , S(DBD7), 0x0001 , 0xC9D9 ,
    0xFFFE , 0xFFFE , 0x0000 , 0x0004 , 0x0016 , S(DBD7), S(D3C9)
};

static const unsigned short a_1[] = {
    0x0000 , 0xD5C0 , 0x0018 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0030 ,
    0x0000 , 0x0000 , 0x0047 , 0x004B , 0x0030 , 0x0000 , 0x0000 , 0x0030 ,
    0x0000 , 0x004E , 0x0000 , 0x0055 , 0x0000 , 0x0000 , 0x0000 , 0x0059 ,
    0x0000 , 0xD5C0 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFF ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFF ,
    0x0000 , 0xD9C5 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0000 ,
    0xC9D9 , 0xFFFF , 0xFFFF , 0x0000 , 0xCDCD , 0x0047 , 0x0000 , 0xC7C7 ,
    0x0051 , 0x0000 , 0xC5CF , 0xFFFF , 0xFFFF , 0x0000 , 0xC1D1 , 0xFFFF ,
    0xFFFF , 0x0000 , 0xCDCD , 0x0051
};

static const unsigned short a_2[] = {
    0x0000 , 0xDDCD , 0x0013 , 0x0016 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0019 , 0x0000 , 0x0020 , 0x0000 , 0xC5C5 , 0xFFFF , 0x0000 , 0xCECE ,
    0xFFFF , 0x0000 , 0xD7D7 , 0x001C , 0x0001 , 0xC9D9 , 0xFFFE , 0xFFFE ,
    0x0001 , 0xC0C0 , 0x0023 , 0x0001 , 0xD5D5 , 0xFFFE
};

static const unsigned short a_3[] = {
    0x0000 , 0xD1D8 , 0x0004 , 0x0004 , 0x0000 , 0xD3D3 , 0xFFFF
};

static const unsigned short a_4[] = {
    0x0000 , 0xD9C0 , 0x001C , 0x001F , 0x0000 , 0x0000 , 0x0000 , 0x002A ,
    0x0000 , 0x0000 , 0x0000 , 0x0039 , 0x0035 , 0x0000 , 0x0023 , 0x003C ,
    0x0027 , 0x0053 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x005B , 0x0000 ,
    0x0000 , 0x0000 , 0x007A , 0x0082 , 0x0002 , 0xD5D5 , 0xFFFE , 0x0000 ,
    0xCCCE , 0x0023 , 0x0027 , 0x0001 , 0xC9D9 , 0xFFFE , 0xFFFE , 0x0001 ,
    0xC5C5 , 0xFFFE , 0x0000 , 0xD4D4 , 0x002D , 0x0000 , 0xCAC5 , 0xFFFF ,
    0x0000 , 0x0000 , 0x0000 , 0xFFFE , 0x0035 , 0x0001 , 0xC5D5 , 0xFFFE ,
    0xFFFE , 0x0000 , 0xCCCC , 0x0023 , 0x0000 , 0xD9C5 , 0xFFFF , 0x0000 ,
    0x0000 , 0x0000 , 0xFFFE , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0xFFFE , 0x0000 , 0xCCCE , 0x0023 , 0x0057 , 0x0001 ,
    0xC5CE , 0xFFFE , 0xFFFF , 0x0000 , 0xD9C0 , 0x0077 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0077 , 0x0000 , 0x0000 , 0x0000 , 0xFFFE , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFE , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFE , 0x0001 ,
    0xD5D5 , 0xFFFE , 0x0000 , 0xD4DB , 0x0023 , 0x007E , 0x0000 , 0xC5C9 ,
    0xFFFF , 0xFFFE , 0x0000 , 0xCECE , 0x0027
};

static const unsigned short a_5[] = {
    0x0000 , 0xD9C0 , 0x001C , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0x001C ,
    0x0000 , 0x0000 , 0x0020 , 0x0027 , 0x0036 , 0x0000 , 0x0000 , 0x0043 ,
    0x0000 , 0xFFFF , 0x0000 , 0x001C , 0x0000 , 0x0000 , 0x0000 , 0xFFFF ,
    0x0000 , 0x0056 , 0xFFFF , 0xFFFF , 0x0001 , 0xC9D8 , 0xFFFF , 0xFFFF ,
    0x0000 , 0xC1D1 , 0xFFFF , 0x0024 , 0x0001 , 0xC9C9 , 0xFFFF , 0x0001 ,
    0xCDC5 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0000 , 0x0000 ,
    0x0000 , 0x0032 , 0x0000 , 0xC1D1 , 0xFFFF , 0x0024 , 0x0001 , 0xCFC5 ,
    0x0024 , 0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0xFFFF , 0x0000 , 0xD1C1 , 0xFFFF , 0x0000 , 0x0000 ,
    0x0000 , 0x0024 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0000 , 0x0024 , 0x0000 , 0xC5CF ,
    0xFFFF , 0xFFFF
};

static const unsigned short a_6[] = {
    0x0000 , 0xD4D8 , 0x0004 , 0x0008 , 0x0000 , 0x0002 , 0xFFFF , S(D3CF),
    0x0000 , 0x0003 , 0xFFFF , S(D3CF), S(00D4)
};

static const unsigned short a_7[] = {
    0x0000 , 0xDBC5 , 0x0019 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0xFFFE , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFD , 0x0000 , 0x0000 ,
    0x001E , 0x0000 , 0x0003 , 0xFFFF , S(CAC5), S(00DB), 0x0000 , 0x0002 ,
    0xFFFF , S(CAC5)
};

static const unsigned char g_v[] = { 35, 130, 34, 18 };

extern int russian_KOI8_R_stem(struct SN_env * z) {
    int among_var;
    int i_p2;
    int i_pV;
    {
        int v_1 = z->c;
        while (1) {
            int v_2 = z->c;
            while (1) {
                int v_3 = z->c;
                z->bra = z->c;
                if (z->c == z->l || z->p[z->c] != 0xA3) goto lab2;
                z->c++;
                z->ket = z->c;
                z->c = v_3;
                break;
            lab2:
                z->c = v_3;
                if (z->c >= z->l) goto lab1;
                z->c++;
            }
            {
                int ret = slice_from_s(z, 1, s_0);
                if (ret < 0) return ret;
            }
            continue;
        lab1:
            z->c = v_2;
            break;
        }
        z->c = v_1;
    }
    i_pV = z->l;
    i_p2 = z->l;
    {
        int v_4 = z->c;
        {
            int ret = out_grouping(z, g_v, 192, 220, 1);
            if (ret < 0) goto lab4;
            z->c += ret;
        }
        i_pV = z->c;
        {
            int ret = in_grouping(z, g_v, 192, 220, 1);
            if (ret < 0) goto lab4;
            z->c += ret;
        }
        {
            int ret = out_grouping(z, g_v, 192, 220, 1);
            if (ret < 0) goto lab4;
            z->c += ret;
        }
        {
            int ret = in_grouping(z, g_v, 192, 220, 1);
            if (ret < 0) goto lab4;
            z->c += ret;
        }
        i_p2 = z->c;
    lab4:
        z->c = v_4;
    }
    z->lb = z->c; z->c = z->l;
    {
        int v_5;
        if (z->c < i_pV) return 0;
        v_5 = z->lb; z->lb = i_pV;
        {
            int v_6 = z->l - z->c;
            do {
                int v_7 = z->l - z->c;
                z->ket = z->c;
                if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 6 || !((25166336 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab6;
                among_var = find_among_b(z, a_0);
                if (!among_var) goto lab6;
                z->bra = z->c;
                switch (among_var) {
                    case 1:
                        do {
                            if (z->c <= z->lb || z->p[z->c - 1] != 0xC1) goto lab7;
                            z->c--;
                            break;
                        lab7:
                            if (z->c <= z->lb || z->p[z->c - 1] != 0xD1) goto lab6;
                            z->c--;
                        } while (0);
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
                }
                break;
            lab6:
                z->c = z->l - v_7;
                {
                    int v_8 = z->l - z->c;
                    z->ket = z->c;
                    if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 209 && z->p[z->c - 1] != 216)) { z->c = z->l - v_8; goto lab8; }
                    if (!find_among_b(z, a_3)) { z->c = z->l - v_8; goto lab8; }
                    z->bra = z->c;
                    {
                        int ret = slice_del(z);
                        if (ret < 0) return ret;
                    }
                lab8:
                    ;
                }
                do {
                    int v_9 = z->l - z->c;
                    z->ket = z->c;
                    if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 6 || !((2271009 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab9;
                    if (!find_among_b(z, a_1)) goto lab9;
                    z->bra = z->c;
                    {
                        int ret = slice_del(z);
                        if (ret < 0) return ret;
                    }
                    {
                        int v_10 = z->l - z->c;
                        z->ket = z->c;
                        if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 6 || !((671113216 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->c = z->l - v_10; goto lab10; }
                        among_var = find_among_b(z, a_2);
                        if (!among_var) { z->c = z->l - v_10; goto lab10; }
                        z->bra = z->c;
                        switch (among_var) {
                            case 1:
                                do {
                                    if (z->c <= z->lb || z->p[z->c - 1] != 0xC1) goto lab11;
                                    z->c--;
                                    break;
                                lab11:
                                    if (z->c <= z->lb || z->p[z->c - 1] != 0xD1) { z->c = z->l - v_10; goto lab10; }
                                    z->c--;
                                } while (0);
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
                        }
                    lab10:
                        ;
                    }
                    break;
                lab9:
                    z->c = z->l - v_9;
                    z->ket = z->c;
                    if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 6 || !((51443235 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab12;
                    among_var = find_among_b(z, a_4);
                    if (!among_var) goto lab12;
                    z->bra = z->c;
                    switch (among_var) {
                        case 1:
                            do {
                                if (z->c <= z->lb || z->p[z->c - 1] != 0xC1) goto lab13;
                                z->c--;
                                break;
                            lab13:
                                if (z->c <= z->lb || z->p[z->c - 1] != 0xD1) goto lab12;
                                z->c--;
                            } while (0);
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
                    }
                    break;
                lab12:
                    z->c = z->l - v_9;
                    z->ket = z->c;
                    if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 6 || !((60991267 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab5;
                    if (!find_among_b(z, a_5)) goto lab5;
                    z->bra = z->c;
                    {
                        int ret = slice_del(z);
                        if (ret < 0) return ret;
                    }
                } while (0);
            } while (0);
        lab5:
            z->c = z->l - v_6;
        }
        {
            int v_11 = z->l - z->c;
            z->ket = z->c;
            if (z->c <= z->lb || z->p[z->c - 1] != 0xC9) { z->c = z->l - v_11; goto lab14; }
            z->c--;
            z->bra = z->c;
            {
                int ret = slice_del(z);
                if (ret < 0) return ret;
            }
        lab14:
            ;
        }
        {
            int v_12 = z->l - z->c;
            z->ket = z->c;
            if (z->c - 2 <= z->lb || (z->p[z->c - 1] != 212 && z->p[z->c - 1] != 216)) goto lab15;
            if (!find_among_b(z, a_6)) goto lab15;
            z->bra = z->c;
            if (i_p2 > z->c) goto lab15;
            {
                int ret = slice_del(z);
                if (ret < 0) return ret;
            }
        lab15:
            z->c = z->l - v_12;
        }
        {
            int v_13 = z->l - z->c;
            z->ket = z->c;
            if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 6 || !((151011360 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab16;
            among_var = find_among_b(z, a_7);
            if (!among_var) goto lab16;
            z->bra = z->c;
            switch (among_var) {
                case 1:
                    {
                        int ret = slice_del(z);
                        if (ret < 0) return ret;
                    }
                    z->ket = z->c;
                    if (z->c <= z->lb || z->p[z->c - 1] != 0xCE) goto lab16;
                    z->c--;
                    z->bra = z->c;
                    if (z->c <= z->lb || z->p[z->c - 1] != 0xCE) goto lab16;
                    z->c--;
                    {
                        int ret = slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    if (z->c <= z->lb || z->p[z->c - 1] != 0xCE) goto lab16;
                    z->c--;
                    {
                        int ret = slice_del(z);
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
        lab16:
            z->c = z->l - v_13;
        }
        z->lb = v_5;
    }
    z->c = z->lb;
    return 1;
}
