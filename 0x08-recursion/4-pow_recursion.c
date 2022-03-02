#include "main.h"

/**
 * _pow_recursion - Calculate the power of a number.
 *
 * @x: Number to be powered.
 * @y: Power to take.
 *
 * Description: Calculate the value of x raised to the
 * power of y
 *
 * Return: Th epower y of x.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
