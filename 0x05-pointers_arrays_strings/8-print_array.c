#include <stdio.h>
#include "main.h"

/**
 * print_array - Function that prints n elements of an array.
 *
 * @a: Pointer to an array.
 * @n: number of elements in the array.
 *
 * Description: Takes a pointer to an array  and print and
 * the elements of it.
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
