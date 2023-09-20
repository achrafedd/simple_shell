#include "shell.h"

/**
 * main - main shell function
 *
 * @ac: arguments count
 * @av: arguments
 *
 * Return: 0 if programme run correctly, non zero in error
 */

int main(int ac, char **av)
{
	char *line = NULL;
	char **cmd = NULL;
	int status, i = 0;
	(void) ac;

	while (1)
	{
		line = _readline();
		if (!line)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}
		i++;
		cmd = _splitter(line);
		if (!cmd)
			continue;
		status = _execute(cmd, av, i);
	}
	return (0);
}
