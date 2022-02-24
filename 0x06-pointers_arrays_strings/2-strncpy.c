#include "main.h"
#include <stddef.h>

/**
 * _strncpy - Function that copies a string.
 * @dest: Pointer to an empty address.
 * @src: Pointer to the string to be copied.
 * @n: Integer that limit the amount of bytes in scr string.
 *
 * Description: Takes a string pointer and copies it values to a
 * new address.
 *
 * Return: A pointer to the copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
	        dest[i] = src[i];
		i++;
	}

	i = i;
	while (i < n)
	{
	        dest[i] = '\0';
		i++;
	}
	return (dest);
}
