#include "main.h"

/**
 * _strstr - Function that locates a substring.
 *
 * @haystack: Pointer to string.
 * @needle: String to be locates.
 *
 * Description: Find the first ocurrence of the string needle
 * in the string haystack.
 *
 * Return: Pointer to the beggining of located string.
 *
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (begin);
		haystack = begin + 1;
	}
	return ('\0');
}
