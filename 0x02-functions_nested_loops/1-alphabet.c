#include "main.h"

/**
 * print_alphabet - Alphabet in lowercases.
 *
 * Description: this function prints the alphabet in lowercases.
 * Section header : uses holberton _putchar function.
 * Return : Always 0 (success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}
