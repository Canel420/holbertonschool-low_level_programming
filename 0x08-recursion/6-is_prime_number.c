#include "main.h"
/**
 * divisor - Checks reminders for number to tell if
 * prime
 *
 * @i: Posible divisors
 * @j: Number to be check if prime
 *
 * Description: Checks for de reminder of divide
 * number for all numbers bewtween 1 and number.
 *
 * Return: 0 if no reminder, 1 otherwise.
 */
int divisor(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	if (i > j / 2)
		return (1);
	return (divisor(i + 1, j));
}

/**
 * is_prime_number - Check if number is prime.
 *
 * @n: number to be check
 *
 * Description: Check if number is prime or not
 *
 * Return: 1 if number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (divisor(2, n));
}
