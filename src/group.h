/*
 This file is part of SLRN.

 Copyright (c) 1994, 1999 John E. Davis <davis@space.mit.edu>
 Copyright (c) 2001, 2002 Thomas Schultz <tststs@gmx.de>

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
extern int slrn_select_group_mode (void);
extern void slrn_group_quit (void);
extern int slrn_add_group (char *);
extern void slrn_select_next_group (void);
extern void slrn_select_prev_group (void);
extern int slrn_group_select_group (void);
extern void slrn_list_all_groups (int);
extern void slrn_hide_groups (int);
extern int slrn_read_newsrc (int);
extern int slrn_write_newsrc (int);
extern void slrn_mark_article_as_read (char *, long);
extern int slrn_get_new_groups (int);
extern void slrn_init_group_mode (void);
extern void slrn_get_group_descriptions (void);
extern int slrn_read_group_descriptions (void);
extern int slrn_set_group_format (unsigned int, char *);
extern SLKeyMap_List_Type *Slrn_Group_Keymap;
extern void slrn_post_cmd (void);
extern unsigned int slrn_group_up_n (unsigned int);
extern unsigned int slrn_group_down_n (unsigned int);
extern int slrn_group_search (char *, int);
extern void slrn_catchup_group (void);
extern void slrn_uncatchup_group (void);
extern void slrn_hide_current_group (void);

extern void slrn_intr_get_group_order (void);
extern void slrn_intr_set_group_order (void);

typedef struct Slrn_Range_Type 
{
   struct Slrn_Range_Type *next;
   struct Slrn_Range_Type *prev;
   int min, max;
} Slrn_Range_Type;

typedef struct Slrn_Group_Type
{
   struct Slrn_Group_Type *next;
   struct Slrn_Group_Type *prev;
   unsigned int flags;
#define GROUP_UNSUBSCRIBED		0x001
#define GROUP_NEW_GROUP_FLAG		0x002
#define GROUP_HARMLESS_FLAGS_MASK 	0x0FF
#define GROUP_HIDDEN			0x100
#define GROUP_TOUCHED			0x200
#define GROUP_PROCESSED			0x400

   char *group_name;
   unsigned long hash;
   struct Slrn_Group_Type *hash_next;
   
   Slrn_Range_Type range;		       /* the first range corresponds to
						* what the server has.  next ranges
						* correspond to what has been read.
						*/
   Slrn_Range_Type *requests; /* body requests for true offline mode
			       * note that the first one is also malloced here! */
   
   int unread;
   char *descript;		       /* description of the group */
}
Slrn_Group_Type;

extern Slrn_Group_Type *Slrn_Group_Current_Group;
/* See important comment in group.c about these. */
extern void slrn_add_group_ranges (Slrn_Group_Type *, int, int);
extern void slrn_add_group_requests (Slrn_Group_Type *, int, int);

extern char *Slrn_Group_Help_Line;
extern char *Slrn_Group_Status_Line;

extern int Slrn_Groups_Dirty;
extern int *Slrn_Prefix_Arg_Ptr;
extern int Slrn_No_Backups;
extern int Slrn_No_Autosave;
extern int Slrn_Unsubscribe_New_Groups;
extern int Slrn_Check_New_Groups;
extern int Slrn_List_Active_File;
extern int Slrn_Query_Group_Cutoff;
extern int Slrn_Write_Newsrc_Flags;
extern int Slrn_Display_Cursor_Bar;
extern int Slrn_Drop_Bogus_Groups;
extern int Slrn_Max_Queued_Groups;
