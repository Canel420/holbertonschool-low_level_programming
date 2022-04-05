#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 *
 * @n: Reference to number.
 * @index: Position of the bit to be changed.
 *
 * Description: Change a the bit in position index by 1.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int get = 1;

	if (index > ((sizeof(unsigned long int)*8) - 1))
	{
		return (-1);
	}

	get <<= index;
	*n = *n | get;

	return (1);
}
