#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 *
 * @s: Pointer to string.
 * @accept: Bytes to match.
 *
 * Description: Match first characters and on, from accept into s
 *
 * Return: Return character and rest of the string.
 *
 */

char *_strpbrk(char *s, char *accept)
{
	char *orig = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		accept = orig;
		s++;
	}
	return ('\0');
}
