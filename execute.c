#include "shell.h"

/**
 * _execute - execute commends
 *
 * @cmd: commend
 * @argv: arguments
 *
 * Return: status
*/
int _execute(char **cmd, char **argv)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execve(cmd[0], cmd, environ) == -1)
		{
			perror(argv[0]);
			_free_2d_array(cmd);
			exit(127);
		}
	} else
	{
		waitpid(pid, &status, 0);
		_free_2d_array(cmd);
	}

	return (WEXITSTATUS(status));
}
