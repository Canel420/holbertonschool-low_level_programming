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
	int i, len = 1;
	char *dest2 = dest, *resrc = src;

	/* Remember to check if dest has space to save stuffs */

	if (dest == NULL || src == NULL)
		return (NULL);

	/* length of string, initiated in 1 to account '\0' space */
	while (*src != '\0')
	{
		len++;
		src++;
	}

	/* if n is longer than len, function will crash */
	if (n > len)
		n = len;

	/* src is at the end, need to resets it */

	src = resrc;

	/* copy src inside dest, taking in account n characters */

	for (i = 0 ; i < n ; i++)
		*dest++ = *src++;

	return (dest2);
}
