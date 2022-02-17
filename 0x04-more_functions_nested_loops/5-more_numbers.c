#include "main.h"

/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14
 *
 * Description: this function prints the numbers from 0 to 14 using _putchar
 * function.
 *
 */

void more_numbers(void)
{
	int a = 0;
	int j;

	while (a <= 9)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		a++;
		_putchar('\n');
	}
}
