#include "main.h"
/**
 * print_last_digit - Printss last digit of a number.
 * @n: Number to be checked.
 *
 * Description: this function prints the last digit of a given number.
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int value;

	if (n >= 0)
		value = (n % 10);
	else
		value = -1 * (n % 10);

	_putchar(value + '0');
	return (value);
}
