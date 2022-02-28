#include "main.h"

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
