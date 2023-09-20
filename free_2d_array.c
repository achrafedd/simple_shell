#include "shell.h"

/**
 * _free_2d_array - free 2D Array
 *
 * @array: Array
 */
void _free_2d_array(char **array)
{
	int i = 0;

	if (!array)
		return;

	while (array[i])
	{
		free(array[i]), array[i] = NULL;
		i++;
	}
	free(array), array = NULL;
}
