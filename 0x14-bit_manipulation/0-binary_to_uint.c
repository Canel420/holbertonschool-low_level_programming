#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 *
 * @b: String of a binary digit.
 *
 * Description: Take a binary string and modifies the bits of
 * an unsigned int initialized in zero, until it reach the number given
 * in the string.
 *
 * Return: The unsigned integer equivalence.
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;

	if (!b)
		return (0);

	for (i = 0 ; b[i] != '\0' ; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);

		sum = sum << 1;
		if (b[i] == '1')
			sum += 1;
	}
	return (sum);
}
