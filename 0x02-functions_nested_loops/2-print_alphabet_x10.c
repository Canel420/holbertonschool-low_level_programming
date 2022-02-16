#include "main.h"

/**
 * print_alphabet_x10 - Alphabets in lowercases.
 *
 * Description: this function prints the alphabet in lowercases 10 times.
 * Section header : uses holberton _putchar function.
 * Return : Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char ch;

	while (a <= 9)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
			_putchar(ch);
		_putchar('\n');
		a++;
	}
}
