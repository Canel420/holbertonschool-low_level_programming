#include "main.h"

/**
 * main - Prints the word _putchar
 *
 * Description: prints the word _putchar using the function
 * _putchar.
 * Return: Always 0 (success)
 */
int main(void)
{
	char ltrs[8] = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++)
		_putchar(ltrs[i]);
	_putchar('\n');

	return (0);
}
