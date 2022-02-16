#include "main.h"

/**
 * jack_bauer - Prints day's minutes.
 *
 * Description: Prints each minute that make up a day's hours.
 * Return: nothing
 */
void jack_bauer(void)
{
	int i;
	int f;

	for (i = 0 ; i <= 23 ; i++)
	{
		for (f = 0 ; f <= 59 ; f++)
		{
			_putchar ((i / 10) + '0');
			_putchar ((i % 10) + '0');
			_putchar (':');
			_putchar ((f / 10) + '0');
			_putchar ((f % 10) + '0');
			_putchar ('\n');
		}
	}
}
