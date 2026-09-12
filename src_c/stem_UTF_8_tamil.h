/* Generated from tamil.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#ifdef __cplusplus
extern "C" {
#endif

struct SN_env;

extern struct SN_env * tamil_UTF_8_create_env(void);
#define tamil_UTF_8_close_env SN_delete_env

extern int tamil_UTF_8_stem(struct SN_env * z);

#ifdef __cplusplus
}
#endif
