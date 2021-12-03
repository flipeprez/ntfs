#ifndef _PROTOLIBSHELL_
#define _PROTOLIBSHEL_

// C libraries

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <signal.h>
#define PROMPT "pls $ "

//struct for builtins

/**
 * struct builtins - is the builtins struct.
 * @built: name.
 * @p:pointer.
 */
typedef struct builtins
{
	char *built;
	void (*p)(char *);
} nbuiltins;
//makes global
extern char **environ;

//functions used in builtins
int built_new(char **, char *);
void (*builtok(char *))(char *);
void exitshell(char *);
void envshell(char *);
void cdshell(char *);
//functions for lib
void string_printer(char *, int);
int str_cmp(char *, char *);
#endif
