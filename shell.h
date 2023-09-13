#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

char *_readline(void);
char **_splitter(char *line);
int _execute(char **cmd, char **argv);

char *_strdup(char *str);
int _strlen(char *str);

void _free_2d_array(char **array);

#endif
