#include "3-calc.h"

/**
 * op_add - Sum two integers
 *
 * @a:First integer.
 * @b:Second integer.
 *
 * Description: Sum two integers.
 * Return: Sum.
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substract two integers
 *
 * @a:First integer.
 * @b:Second integer.
 *
 * Description: Substract two integers.
 * Return: Substraction.
 *
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two integers
 *
 * @a:First integer.
 * @b:Second integer.
 *
 * Description: Multiply two integers.
 * Return: Multiplication
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two integers
 *
 * @a:First integer.
 * @b:Second integer.
 *
 * Description: Divide two integers.
 * Return: Division.
 *
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Module of two integers
 *
 * @a:First integer.
 * @b:Second integer.
 *
 * Description: Calculate the module of two integers.
 * Return: Module
 *
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
