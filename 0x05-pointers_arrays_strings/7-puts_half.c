#include "main.h"

/**
 * puts_half - Function that prints half of a string.
 *
 * @str: Pointer to a string.
 *
 * Description: Takes a pointer to a character of a string and print
 * half of the characters from it until end.
 *
 */

void puts_half(char *str)
{
	int i, j, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
		for (i = len / 2 ; i < len ; i++)
			_putchar(str[i]);
	else if (len % 2 != 0)
		for (j = (len - 2) / 2 ; j < len ; j++)
			_putchar(str[j]);
	_putchar('\n');
}
