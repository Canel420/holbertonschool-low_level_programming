#include "main.h"

/**
 * puts2 - Function that prints every even  character of a string
 *
 * @str: Pointer to a string.
 *
 * Description: Takes a pointer to a character of a string and print
 * even characters until it reach '\0' character.
 *
 */

void puts2(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0 ; i < len - 1 ; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
