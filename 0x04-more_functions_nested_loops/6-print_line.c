#include "main.h"

/**
 * print_line - function that draws a straight line.
 * @n: Gives the times _ will be printed to draw the line.
 *
 * Description: this function prints a straight line in the terminal.
 *
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
