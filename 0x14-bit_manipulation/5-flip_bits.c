#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: First number to compare
 * @m: Second number to compare
 *
 * Description: Compare the bits of two numbers using XOR operator.
 *
 * Return: Amount of different bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int i;

	for (i = 0; diff; diff >>= 1)
	{
		if (diff & 1)
		{
			i++;
		}
	}
	return (i);
}
