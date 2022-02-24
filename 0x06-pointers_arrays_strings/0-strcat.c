#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: Pointer to a string.
 * @src: Pointer to another string.
 *
 * Description: Takes to string pointers and concatenate the values on
 * them.
 *
 * Return: A pointer to the concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	char *dest2 = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (dest2);
}
