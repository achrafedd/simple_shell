#include "shell.h"

/**
 * _getenv - get env value with key
 *
 * @key: key of env
 *
 * Return: value of env
 */
char *_getenv(char *key)
{
	char *str = NULL;
	char *tmp, *env;
	int i = 0;

	while (environ[i])
	{
		tmp = _strdup(environ[i]);
		str = strtok(tmp, "=");
		if (_strcmp(str, key) == 0)
		{
			str = strtok(NULL, "\n");
			env = _strdup(str);
			free(tmp), tmp = NULL;
			return (env);
		}
		free(tmp), tmp = NULL;
		i++;
	}
	return (NULL);
}

/**
 * _itoa - int to ascii
 *
 * @n: number
 *
 * Return: ascii
*/
char *_itoa(int n)
{
	char str[10];
	int i = 0;

	if (n == 0)
		str[i++] = '0';
	else
	{
		while (n > 0)
		{
			str[i++] = (n % 10) + '0';
			n /= 10;
		}
	}
	str[i] = '\0';
	_reverse(str, i);
	return (_strdup(str));
}

/**
 * _reverse - reverse string
 *
 * @str: string
 * @index: index
*/
void _reverse(char *str, int index)
{
	int start = 0;
	int end = index - 1;


	while (start < end)
	{
		char temp = str[start];


		str[start] = str[end];
		str[end] = temp;
		end--;
		start++;
	}
}
