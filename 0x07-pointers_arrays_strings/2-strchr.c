#include "main.h"
#include <stddef.h>

/**
 * _strchr - Function that locates a character in a
 * string.
 *
 * @s: Pointer to string.
 * @c: Character to search.
 *
 * Description: Locates a character in a string.
 *
 * Return: Pointer first ocurrence of character c.
 *
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
		if (*s == c)
			return (s);
	return (NULL);
}
