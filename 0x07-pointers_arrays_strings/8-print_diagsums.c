#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int first, second, i, j;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
				first += a[i][j];
			if ((i + j) == (size - 1))
				second += a[i][j];
		}
	}
	printf("%d, ", first);
	printf("%d\n", second);
}
