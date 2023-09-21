#include "shell.h"

/**
 * _execute - execute commends
 * @n: number to compile
 * @cmd: commend
 * @argv: arguments
 *
 * Return: status
*/
int _execute(char **cmd, char **argv, int n)
{
	pid_t pid;
	int status;
	char *path = _path(cmd[0]);

	if (!path)
	{
		_perror(argv[0], n, cmd[0]);
		free(path), path = NULL;
		_free_2d_array(cmd);
		return (127);
	}

	pid = fork();
	if (pid == 0)
	{
		if (execve(path, cmd, environ) == -1)
		{
			perror(argv[0]);
			free(path), path = NULL;
			_free_2d_array(cmd);
			exit(127);
		}
	} else
	{
		waitpid(pid, &status, 0);
		free(path), path = NULL;
		_free_2d_array(cmd);
	}

	return (WEXITSTATUS(status));
}
