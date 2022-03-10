#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all the arguments
 * of your program.
 *
 * @ac: Argument count
 * @av: Pointer to pointer of arguments array.
 *
 * Description: This function concatenates all arguments
 * pass to main, allocating memory dynamically.
 *
 * Return: Pointer to concatenated string of arguments.
 *
 */

char *argstostr(int ac, char **av)
{
	int i, j, e = 0, len = 0;
	char *concat_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j]; j++)
			len++;
		len++;
	}

	len++;

	concat_str = malloc(len * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			concat_str[e] = av[i][j];
			e++;
		}
		concat_str[e] = '\n';
		e++;
	}

	concat_str[e] = '\0';
	return (concat_str);
}
