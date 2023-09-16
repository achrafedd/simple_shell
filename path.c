#include "shell.h"

/**
 * _path - test if path are correct or not
 *
 * @arg: argument
 *
 * Return: path;
 */
char *_path(char *arg)
{
	struct stat st;
	char *path;
	char *token = NULL;
	char *full_path = NULL;

	if (arg[0] == '/' && stat(arg, &st) == 0)
	{
		return (_strdup(arg));
	}

	path = _getenv("PATH");

	if (!path)
		return (NULL);

	token = strtok(path, ":");

	while (token)
	{
		full_path = malloc(_strlen(token) + _strlen(arg) + 2);
		if (full_path)
		{
			_strcpy(full_path, token);
			_strcat(full_path, "/");
			_strcat(full_path, arg);

			if (stat(full_path, &st) == 0)
			{
				free(path), path = NULL;
				return (full_path);
			}
			free(full_path), full_path = NULL;
			token = strtok(NULL, ":");
		}
	}
	free(path), path = NULL;
	return (NULL);
}
