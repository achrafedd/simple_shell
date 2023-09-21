#include "shell.h"

/**
 * _splitter1 - Tokenize a string
 * @s: Input string
 *
 * Return: NULL on failure.
 */
char **_splitter1(char *s)
{

	int j;
	char **args;
	char *str;
	int i = 0;

	args = malloc(sizeof(char *) * 50);

	if (!args)
	{
		perror("malloc");
		return (NULL);
	}

	str = strtok(s, " \t\n");

	while (str != NULL)
	{
		args[i] = strdup(str);
		if (!args[i])
		{
			perror("strdup");
			for (j = 0; j < i; j++)
			{
				free(args[j]);
			}
			free(args);
			return (NULL);
		}
		i++;
		str = strtok(NULL, " \t\n");
	}

	args[i] = NULL;
	return (args);
}
