#include "shell.h"

/**
 * print_environment - Print the current environment
 */
void print_environment(void)
{
	extern char **environ;
	char **env;

	for (env = environ; *env != NULL; env++)
	{
		printf("%s\n", *env);
	}
}
