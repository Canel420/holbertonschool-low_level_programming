#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring.
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

unsigned int _strspn(char *s, char *accept)
{
        int len = 0;
	char *orig = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				len++;
				break;
			}
			accept++;
		}
		accept = orig + 1;
	        s++;
	}
	return (len);
}
