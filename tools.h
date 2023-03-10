/* file: tools.h -------------------------------------------------------------
 */
/* header file for the tools library. */
/* ---------------------------------------------------------------------------
 */
/* Local definitions and portability code. */
/* Please enter your own system, name, class, and printer stream name. */
/* ---------------------------------------------------------------------------
 */
#ifndef CTOOLS
#define CTOOLS

#define title "Program 1: Letter List"
#define NAME "Justin"
#define CLASS "CSCI 2212"
//#define PRN     "prn"

#include <ctype.h>  /* for isspace() and isdigit() */
#include <float.h>  /* for DOUBLE_MAX, etc. */
#include <limits.h> /* for INT_MAX */
#include <math.h>
#include <stdarg.h> /* for functions with variable # of arguments */
#include <stdio.h>
#include <stdlib.h> /* for malloc() and calloc()*/
#include <string.h> /* for time_t, time() and ctime()*/
#include <time.h>

#define PI 3.1415927

typedef char *cstring;
typedef FILE *cstream;
typedef enum { false, true } bool;

/* -------------------------------------------------------------------------- */
/* Routine screen and process management.------------------------------------ */
/* -------------------------------------------------------------------------- */
void banner(void);
void hold(void);
void bye(void);
int fatal(cstring format, ...);

/* -------------------------------------------------------------------------- */
/* Time and date.  ---------------------------------------------------------- */
/* -------------------------------------------------------------------------- */
void when(char date[], char hour[]);
cstring today(char date[]);
cstring oclock(char hour[]);

#endif
