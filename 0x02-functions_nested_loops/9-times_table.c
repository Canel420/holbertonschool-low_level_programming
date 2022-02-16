#include "main.h"

/**
 * times_table - Prints the 9 times table.
 *
 * Description: Prints the 9 time table starting with zero.
 * Return: Multiplication tables
 */

void times_table(void)
{
	int i;
	int h;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (h = 0 ; h <= 9 ; h++)
		{
			if ((h * i) <= 9)
			{
				_putchar((h * i) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(((h * i) / 10) + '0');
				_putchar(((h * i) % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
