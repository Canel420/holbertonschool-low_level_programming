#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 *
 * @a: Pointer to an array of integers
 * @n: Number of elements of the array.
 *
 * Description: Reverses the content of an array of integers.
 *
 */

void reverse_array(int *a, int n)
{
	int i, b;
	int s;

	s = n - 1;

	for (i = 0; i < s; i++)
	{
		b = a[i];
		a[i] = a[s];
		a[s] = b;
		s--;
	}
}
