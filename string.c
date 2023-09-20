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

/**
 * _strcmp - compare two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 if the both strings are same
 *         1 if the first string are biger then second string in ascii
 *         -1 if the first string are smaller then second string in ascii
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{

		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);

		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/**
 * _strcat - concatenates two strings.
 * @buff: the result string
 * @src: the source string
 *
 * Return: the concatenated string.
 */
char *_strcat(char *buff, char *src)
{
	char *ptr = buff + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return (buff);
}

/**
 * _strcpy - copy a string into onther
 * @buf: the copeid string
 * @src: the original string
 *
 * Return: the copeid string
 */
char *_strcpy(char *buf, char *src)
{
	int i, len;

	len = _strlen(src);

	for (i = 0; i < len; i++)
	{
		buf[i] = src[i];
	}

	buf[i] = '\0';
	return (buf);
}
