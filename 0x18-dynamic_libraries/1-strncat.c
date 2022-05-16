#include "main.h"

/**
 * _strncat - Function that concatenates two strings.
 * @dest: Pointer to a string.
 * @src: Pointer to another string.
 * @n: Integer that limit the amount of bytes in scr string.
 *
 * Description: Takes to string pointers and concatenate the values on
 * them.
 *
 * Return: A pointer to the concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != 0)
	{
		i++;
	}

	while (j < n && src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
