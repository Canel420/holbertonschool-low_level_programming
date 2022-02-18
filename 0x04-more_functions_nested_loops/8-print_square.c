#include "main.h"

/**
 * print_square - function that prints a square.
 * @size: Gives the side size of the square.
 *
 * Description: this function prints a square made of #.
 *
 */

void print_square(int size)
{
	int i;
	int k;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			_putchar('\n');

			for (k = 0 ; k < size ; k++)
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
