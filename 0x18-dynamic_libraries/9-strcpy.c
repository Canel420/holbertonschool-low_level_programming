#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 *
 * @dest: Pointer the copied array.
 * @src: Pointer to string to be copied.
 *
 * Description: Copies the string pointed to by src to
 * the buffer pointed to by dest.
 *
 * Return: The copied string.
 */

char *_strcpy(char *dest, char *src)
{
	char *sthg = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (sthg);
}
