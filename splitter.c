#include "shell.h"

/**
 * _splitter - split sting into array of strings
 *
 * @line: string
 *
 * Return: Array of strings
 */

char **_splitter(char *line)
{
	char *str = NULL;
	char *tmp = NULL;
	char **cmd = NULL;
	char *delim = " \t\n";
	int i = 0, len = 0;

	if (!line)
		return (NULL);

	tmp = _strdup(line);
	str = strtok(tmp, delim);
	if (!str)
	{
		free(line), line = NULL;
		return (NULL);
	}
	while (str)
	{
		len++;
		str = strtok(NULL, delim);
	}
	free(tmp), tmp = NULL;

	cmd = malloc(sizeof(char *) * (len + 1));
	if (!cmd)
	{
		free(line), line = NULL;
		return (NULL);
	}

	str = strtok(line, delim);
	while (str)
	{
		cmd[i] = str;
		str = strtok(NULL, delim);
		i++;
	}
	cmd[i] = NULL;
	return (cmd);
}
