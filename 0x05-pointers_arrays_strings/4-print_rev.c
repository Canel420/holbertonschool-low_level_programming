#include "main.h"

/**
 * print_rev -  Function that prints a string, in reverse
 * @s: Pointer to the characters of a string.
 *
 * Description: Takes a pointer to a character of a string and reverse
 * each character.
 *
 * Return: The reversed string.
 */

void print_rev(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
