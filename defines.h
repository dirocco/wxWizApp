
#ifndef __DEFINES__
#define __DEFINES__

#define APP_TITLE   "wxWindows Wizard's Apprentice"
#define APP_VERSION "0.1"


/* Commands */
#define CMD_MB          "MB"
#define CMD_TB          "TB"
#define CMD_EB          "EB"
#define CMD_RB          "RB"
#define CMD_CL          "CL"
#define CMD_FB          "FB"
#define CMD_FT          "FT"
#define CMD_CB          "CB"
#define CMD_LB          "LB"

/* Message box options */                        
#define OPT_MB_INFO     "INFORMATION"
#define OPT_MB_EXCLA    "EXCLAMATION"
#define OPT_MB_QUES     "QUESTION"
#define OPT_MB_STOP     "STOP"

/* Edit box options */
#define OPT_EB_PLAIN    "PLAIN"
#define OPT_EB_HIDDEN   "HIDDEN"

/* File browser options */
#define OPT_FB_FILE     "FILE"
#define OPT_FB_DIR      "DIR"    

/* List box options */
#define OPT_LB_SINGLE     "SINGLE"
#define OPT_LB_MULTIPLE   "MULTIPLE"    

/* General options */
#define OPT_NOBACK      "NOBACK"
#define OPT_FINISH      "FINISH"


/* Names of env vars */
/* waprefix always has prefix "wa" */
#define VAR_PREFIX      "waprefix"
/* If not set, use the default prefix */
#define DEF_PREFIX      "wa"
/* Environment variables postfixes. 
   Variable names are prefix+postfex, e.g. "watext" */
#define VAR_TEXT        "text"
#define VAR_TITLE       "title"
#define VAR_BMP         "bmp"
#define VAR_ICO         "ico"
#define VAR_SIG         "sig"
#define VAR_SOUND       "sound"
#define VAR_FILE        "file"
#define VAR_INPUT       "input"
#define VAR_LISTSEP     "listsep"
#define VAR_LABELS      "labels"
#define VAR_EOL         "eol"
#define VAR_BAT         "bat"
#define VAR_OUTPUT      "output"
#define VAR_OUTNUM      "outnum"
/* Default values if other than "" */
#define DEF_LISTSEP     ';' /* This must be a char */
#define DEF_EOL         '~' /* This must be a char */

/* User definable labels */
#define LABEL_BACK      "< &Back"
#define LABEL_NEXT      "&Next >"
#define LABEL_FINISH    "&Finish"
#define LABEL_CANCEL    "&Cancel"
#define LABEL_BROWSE    "B&rowse"

/* sizes */
/* Size of "waprefix" value. It seems reasonable to limit this. */
#define SIZE_PREFIX     (64 + 1)
/* This should be at least SIZE_PREFIX + the longest postfix */
#define SIZE_VAR        (SIZE_PREFIX + 16)
/* Size of environment variable's value. 
   Multible blocks will be used if necessary. */
#define SIZE_VALUE      1024

/* Size of file contents block. 
   Multible blocks will be used if necessary. */
#define SIZE_BLOCK      1024

/* Number of radio buttons and checkboxes in dialog */
#define NUM_BUTTONS     10


#endif


