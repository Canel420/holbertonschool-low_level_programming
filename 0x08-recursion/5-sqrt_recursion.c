#include "main.h"

/**
 * pow_sqr - Function to find a squared number equals to n
 *
 * @a: Number equal to a squared number b
 * @b: Number to be squared.
 *
 * Description: Finds a squared number equals to
 * an another number n.
 *
 * Return: Numbered that was squared.
 */

int pow_sqr(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (pow_sqr(a, b + 1));
}
/**
 * _sqrt_recursion - Find the suare root of a number.
 *
 * @n: Number to find the root.
 *
 * Description: Find the exact root of a number n if
 * it have it.
 *
 * Return: Root number.
 */

int _sqrt_recursion(int n)
{
	return (pow_sqr(n, 1));
}
