#include "shell.h"

/**
 * _readline - Read line
 *
 * Return: line
 */
char *_readline(void)
{
	char *line = NULL;
	size_t n;
	int len;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

	len = getline(&line, &n, stdin);
	if (len == -1)
	{
		free(line), line = NULL;
		return (NULL);
	}

	return (line);
}
