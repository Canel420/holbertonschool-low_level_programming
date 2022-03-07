#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Copy of a string
 *
 * @str: String to be copied.
 *
 * Description: Creates a copy of a string allocating
 * dynamically the memory for it.
 *
 * Return: A pointer to a newly allocated space in memory, which
 * contains a copy of the string or NULL if no string is given or
 * memory couldn't be allocated.
 *
 */

char *_strdup(char *str)
{
	char *strcpy;
	char *origin = str;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	len = len + 1;
	str = origin;

	strcpy = malloc(len * sizeof(char));

	if (strcpy == NULL)
		return (NULL);

	for (i = 0 ; i < len ; i++)
		strcpy[i] = str[i];
	return (strcpy);
}
