#include "shell.h"

/**
 * _perror - print error
*/

void _perror(char *file, int n, char *cmd)
{
	char *index = _itoa(n);
	char *msg = ": not found\n";
	write(STDERR_FILENO, file, _strlen(file));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, index, _strlen(index));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, cmd, _strlen(cmd));
	write(STDERR_FILENO, msg, _strlen(msg));
	free(index), index = NULL;
}