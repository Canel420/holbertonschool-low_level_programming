#include "main.h"

/**
 * print_numbers - Function that prints the numbers, from 0 to 9.
 * Description: This functions prints the numbers from 0 t0 9,
 * followed by a new line.
 *
 */

void print_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
		_putchar(i);
	_putchar('\n');
}
