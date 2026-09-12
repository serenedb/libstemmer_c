/* Generated from polish.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#ifdef __cplusplus
extern "C" {
#endif

struct SN_env;

extern struct SN_env * polish_ISO_8859_2_create_env(void);
#define polish_ISO_8859_2_close_env SN_delete_env

extern int polish_ISO_8859_2_stem(struct SN_env * z);

#ifdef __cplusplus
}
#endif
