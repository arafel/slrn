/*
 This file is part of SLRN.

 Copyright (c) 1994, 1999 John E. Davis <davis@space.mit.edu>
 Copyright (c) 2001 Thomas Schultz <tststs@gmx.de>

 This program is free software; you can redistribute it and/or modify it
 under the terms of the GNU General Public License as published by the Free
 Software Foundation; either version 2 of the License, or (at your option)
 any later version.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 more details.

 You should have received a copy of the GNU General Public License along
 with this program; if not, write to the Free Software Foundation, Inc.,
 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/
#ifndef _SLRN_SLRN_H_
#define _SLRN_SLRN_H_
#include <slang.h>
#include "version.h"

extern int Slrn_TT_Initialized;
extern int Slrn_Use_Flow_Control;
extern void slrn_quit (int);

extern int slrn_handle_interrupts (void);

extern void slrn_set_display_state (int);
#define SLRN_SMG_INIT	1
#define SLRN_TTY_INIT	2

extern void slrn_push_suspension (int);
extern void slrn_pop_suspension (void);

extern char *Slrn_Newsrc_File;
#if 0
extern void (*Slrn_Hangup_Hook) (int);
extern void (*Slrn_Winch_Function) (void);
#endif

typedef struct
{
   SLKeyMap_List_Type *keymap;
   void (*redraw_fun) (void);
   void (*sigwinch_fun) (int, int);
   void (*hangup_fun) (int);
   void (*enter_mode_hook)(void);

#define SLRN_ARTICLE_MODE	1
#define SLRN_GROUP_MODE		2
#define SLRN_MENU_MODE		3
   int mode;
}
Slrn_Mode_Type;

extern void slrn_do_keymap_key (SLKeyMap_List_Type *);

extern void slrn_push_mode (Slrn_Mode_Type *);
extern void slrn_pop_mode (void);
extern Slrn_Mode_Type *Slrn_Current_Mode;

extern void slrn_digit_arg (void);
extern void slrn_set_prefix_argument (int);
extern void slrn_repeat_last_key (void);
extern void slrn_call_command (char *);

extern long slrn_date_to_order_parm (char *);
extern void slrn_strftime (char *, size_t, const char *, char *, int);
extern int slrn_parse_helpfile (char *);
extern void slrn_smg_refresh (void);
extern void slrn_enable_mouse (int);
extern void slrn_init_hangup_signals (int);
extern int Slrn_Use_Mouse;

void slrn_va_exit_error (char *, va_list);

extern int Slrn_Default_Server_Obj;
extern int Slrn_Default_Post_Obj;

extern int Slrn_Batch;
extern FILE *Slrn_Debug_Fp;

extern int slrn_sys_system (char *);

#define HEADER_COLOR		1
#define GROUP_COLOR		2
#define AUTHOR_COLOR		3
#define FROM_MYSELF_COLOR	4
#define ERROR_COLOR		5
#define CURSOR_COLOR		6
#define ARTICLE_COLOR		7
#define TREE_COLOR		8
#define PGP_SIGNATURE_COLOR	9
#define SIGNATURE_COLOR		10
#define THREAD_NUM_COLOR	11
#define MENU_PRESS_COLOR	12
#define HEADER_NUMBER_COLOR	13
#define GROUP_DESCR_COLOR	14
#define GROUPLENS_DISPLAY_COLOR	15
#define SLRN_TILDE_COLOR	16
#define SLRN_HEADER_KEYWORD_COLOR	17
#define BOX_COLOR		18
#define STATUS_COLOR		19
#define MENU_COLOR		20
#define RESPONSE_CHAR_COLOR	21
#define FRAME_COLOR		22
#define SELECT_COLOR		23
#define VERBATIM_COLOR		24
#define MESSAGE_COLOR		25
#define DATE_COLOR		36
/* SUBJECT_COLOR + 5 == HL_SUBJECT_COLOR etc. */
#define SUBJECT_COLOR		40
#define NEG_SCORE_COLOR		41
#define POS_SCORE_COLOR		42
#define HIGH_SCORE_COLOR	43
#define UNREAD_SUBJECT_COLOR	44
#define HL_SUBJECT_COLOR	45
#define HL_NEG_SCORE_COLOR	46
#define HL_POS_SCORE_COLOR	47
#define HL_HIGH_SCORE_COLOR	48

#define BOLD_COLOR		30
#define UNDERLINE_COLOR		31
#define ITALICS_COLOR		32
#define URL_COLOR		33
#define QUOTE_COLOR	50

#endif				       /* _SLRN_SLRN_H_ */