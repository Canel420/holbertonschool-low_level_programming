#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index.
 *
 * @n: Number to be examined
 * @index: Position of bit to extract
 *
 * Description: Change position of bits in number until index, and extract bit.
 *
 * Return: Bit at position index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(unsigned long int) * 8 < index)
	{
		return (-1);
	}

	n = n >> index;

	if (n & 1)
		return (1);
	else
		return (0);
}
