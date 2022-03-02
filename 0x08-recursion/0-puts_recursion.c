#include "main.h"

/**
 *  _puts_recursion - Print a string.
 *
 * @s: String to print.
 *
 * Description: This function print the string s
 * using recursion.
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
