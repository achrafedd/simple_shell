#include "shell.h"

/**
 * _strdup - duplicate string
 *
 * @str: String
 *
 * Return: Duplicated string
 */
char *_strdup(char *str)
{
	char *new_str;
	int i = 0;

	if (!str)
		return (NULL);

	new_str = malloc(_strlen(str) + 1);

	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';

	return (new_str);
}

/**
 * _strlen - Calculate length of string
 *
 * @str: String
 *
 * Return: Length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
