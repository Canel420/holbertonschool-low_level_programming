#include "main.h"

/**
 * rev_string -  Function that prints a string, in reverse
 * @s: Pointer to the characters of a string.
 *
 * Description: Takes an array of characters and reverse
 * each character.
 *
 * Return: The reversed string.
 */

void rev_string(char *s)
{
	int len2 = 0, len1 = 0;
	char ch;

	while (s[len1] != '\0')
	{
		len1++;
	}

	len1 = len1 - 1;
	while (len2 <= len1)
	{
		ch = s[len2];
		s[len2] = s[len1];
		s[len1] = ch;

		len2++;
		len1--;
	}
}
