#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: the number to be sign checked.
 *
 * Description: this function tells if a number is positive, negative or zero
 * Section header : uses holberton _putchar function.
 * Return: 1 if number is positive, -1 if number is negative and zero if number
 * is zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
