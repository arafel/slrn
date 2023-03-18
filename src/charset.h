#ifndef _SLRN_CHARSET_H
#define _SLRN_CHARSET_H

extern void slrn_init_charset(void);
extern void slrn_prepare_charset(void);

/* returns a malloced pointer */
extern char *slrn_guess_charset (SLFUTURE_CONST char *str, SLFUTURE_CONST char *strmax);

extern int slrn_string_nonascii(SLFUTURE_CONST char *str);

extern char *slrn_convert_string (char *from, SLFUTURE_CONST char *str, SLFUTURE_CONST char *strmax, char *to, int test);

extern char *slrn_convert_substring(SLFUTURE_CONST char *str, unsigned int offset, unsigned int len, char *to_charset, char *from_charset, int test);
extern int slrn_test_and_convert_string(SLFUTURE_CONST char *str, char **dest, char *to_charset, char *from_charset);
extern int slrn_convert_fprintf(FILE *fp, char *to_charset, char *from_charset, const char *format, ... ) ATTRIBUTE_PRINTF(4,5);

extern int slrn_convert_article(Slrn_Article_Type *a, char *to_charset, char *from_charset);
extern int slrn_test_convert_lines (Slrn_Article_Line_Type *lines, char *to_charset, char *from_charset, char **badlinep);

extern char *Slrn_Config_Charset;
extern char *Slrn_Display_Charset;
extern char *Slrn_Outgoing_Charset;
extern char *Slrn_Editor_Charset;
extern char *Slrn_Fallback_Input_Charset;

#endif /* _SLRN_CHARSET_H */
