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
char **_splitter1(char *s);
int _execute(char **cmd, char **argv, int n);
char *_getenv(char *key);
char *_path(char *arg);

char *_strdup(char *str);
int _strlen(char *str);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
void _reverse(char *str, int index);
char *_itoa(int n);
void _perror(char *file, int n, char *cmd);

void _free_2d_array(char **array);

#endif
