#include <stdio.h>

/**
 * add - Sum of two integers
 *
 * @a: First integer.
 * @b: Second integer.
 *
 * Description: Gives the sum of two integers.
 *
 * Return: Sum.
 *
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Substraction of two integers
 *
 * @a: First integer.
 * @b: Second integer.
 *
 * Description: Gives the substraction of two integers.
 *
 * Return: Substraction.
 *
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 *
 * @a: First integer.
 * @b: Second integer.
 *
 * Description: Gives the multiplication of two integers.
 *
 * Return: Multiplication
 *
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Division of two integers
 *
 * @a: First integer.
 * @b: Second integer.
 *
 * Description: Gives the division of two integers.
 *
 * Return: Division or 0 if is a zero division.
 *
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

/**
 * mod - Modulus of two integers
 *
 * @a: First integer.
 * @b: Second integer.
 *
 * Description: Gives the modulus of two integers.
 *
 * Return: Modulus or 0 if is a division by zero.
 *
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}
