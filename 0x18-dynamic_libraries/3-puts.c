#include "main.h"

/**
 * _puts - Function that that prints a string.
 *
 * @str: Pointer to a string.
 *
 * Description: Takes a pointer to a character of a string and print
 * the characters until it reach '\0' character.
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
