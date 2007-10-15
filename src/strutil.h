/*
 This file is part of SLRN.

 Copyright (c) 1994, 1999 John E. Davis <davis@space.mit.edu>
 Copyright (c) 2002-2006 Thomas Schultz <tststs@gmx.de>
 Copyright (c) 2007 John E. Davis <jed@jedsoft.org>

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
#ifndef _SLRN_STRUTIL_H_
#define _SLRN_STRUTIL_H_
extern char *slrn_simple_strtok (char *, char *);
extern char *slrn_strchr (char *, char);
extern char *slrn_skip_whitespace (char *s);
extern char *slrn_bskip_whitespace (char *s);
extern char *slrn_trim_string (char *s);
extern int slrn_case_strncmp (char *, char *, unsigned int);
extern int slrn_case_strcmp (char *, char *);
extern char *slrn_strbrk (char *, char *);
extern char *slrn_strncpy (char *, const char*, size_t);

extern char *slrn_safe_strmalloc (char *);
extern char *slrn_safe_strnmalloc (char *, unsigned int);
extern char *slrn_safe_malloc (unsigned int);
extern char *slrn_strmalloc (char *, int);
extern char *slrn_strnmalloc (char *, unsigned int, int);
extern char *slrn_malloc (unsigned int, int, int);
extern char *slrn_realloc (char *, unsigned int, int);
extern void slrn_free (char *);

#endif