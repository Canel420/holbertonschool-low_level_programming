#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring.
 *
 * @s: Pointer to string.
 * @accept: String to match
 *
 * Description: Count for matching character between accept and
 * s first segment.
 *
 * Return: Unsigned integer
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
			}
			accept++;
		}
		accept = orig;
		s++;
		if (*s == ' ')
		{
			break;
		}
	}
	return (len);
}
