![Travis CI build status](https://travis-ci.com/arafel/slrn.svg?branch=master)

# slrn

## Overview

slrn is a Usenet client that supports both the Network News Transfer
Protocol (NNTP) and a news spool on the local filesystem.  Extensive
information about slrn may be found on its home page at
<http://slrn.sourceforge.net/>.  Installation instructions may be
found in the INSTALL file.

The rest of this file provides an overview of the documentation that
comes with slrn and includes pointers to additional resources.

## Files in this directory

File           | Description
-------------- | -----------
NEWS           | Release Notes
COPYING        | The "GNU GENERAL PUBLIC LICENSE"
COPYRIGHT      | Copyright note.
README         | This File.
changes.txt    | Lists the changes from version to version.
INSTALL.txt    | Installation instructions.

## Files in doc/

File                 | Description
-------------------- | -----------
FAQ                  |  Frequently Asked Questions about slrn  slrnpull.
FIRST_STEPS          |  How to setup slrn for the first time.
INSTALL.os2          |  How to install slrn on OS/2.
INSTALL.unix         |  How to install slrn on Unix-like systems.
INSTALL.vms          |  How to install slrn on VMS.
INSTALL.w32          |  How to install slrn on Windows.
README.GroupLens     |  Read this if you want support for GroupLens.
README.SSL           |  Read this if you want support for secure servers (SSL).
README.macros        |  Some notes on how to expand slrn using the powerful S-Lang macro language
README.multiuser     |  How to set up slrn for more than one user.
THANKS               |  Thanks to people involved in slrn's development.
VMS-SLRN.HLP         |  Help file for use on VMS systems.
help.txt             |  Source file of slrn's online help.
manual.txt           |  The slrn reference manual, explaining all command line options, environment variables, config commands and variables, as well as the interactive functions.
pc-keys.txt          |  A list of key sequences for OS/2 and Windows.
score.sl             |  A mode for editing score files with the editor jed.
score.txt            |  An explanation of slrn's scoring feature.
slrn-doc.html        |  Pointer to the online version of slrn's documentation.
slrn.1               |  slrn's manual page for Unix-like systems.
slrn.rc              |  Documented sample slrnrc file that can be used as a template for your personal configuration.
slrnfuns.txt         |  A list of slrn's intrinsic functions and hooks that can be used from S-Lang macros.
tm/                  |  Source files of the documentation in slrnfuns.txt

## Files in doc/slrnpull

File                 | Description
-------------------- | -----------
README               |  General information and usage of slrnpull.
README.offline	     |  How to fetch article headers first and bodies only on request.
SETUP                |  How to install and configure slrnpull.
score                |  Sample scorefile
setgid.txt           |  Information about the "setgid" feature in slrnpull.
slrn.rc              |  Minimal sample slrnrc file for use with slrnpull.
slrnpull.conf        |  Sample configuration file for slrnpull.
slrnpull.sh          |  Sample shell script to run slrnpull from cron.
