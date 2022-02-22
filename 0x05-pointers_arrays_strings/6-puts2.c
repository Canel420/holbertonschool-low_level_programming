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
	while (*str != '\0')
	{
		if (*str % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
