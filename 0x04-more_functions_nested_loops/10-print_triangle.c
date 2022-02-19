#include "main.h"

void print_triangle(int size)
{
	int i;
	int j;
	int k = size - 1;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size; j++)
			{
				if (j < k)
					_putchar(' ');
				else
					_putchar(35);
			}
			k--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
