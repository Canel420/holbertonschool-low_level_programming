#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer
 *
 * Description: Takes the pointer of two integers as parameter and
 * swaps its values.
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
