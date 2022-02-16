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
	int mult;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (h = 1 ; h <= 9 ; h++)
		{
			mult = (h * i);
			if ((mult / 10) > 0)
			{
				_putchar((mult / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((mult % 10) + '0');

			if (h < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
