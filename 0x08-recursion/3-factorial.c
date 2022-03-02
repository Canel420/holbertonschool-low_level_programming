#include "main.h"

/**
 * factorial - Calculate the factorial of a given number.
 *
 * @n: Integer for factorial calculation.
 *
 * Description: Calculate the factorial of a given
 * number recursively.
 *
 * Return: the factorial of the number.
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
