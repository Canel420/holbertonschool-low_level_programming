#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -Prints all natural numbers.
 * @n: Number to be checked.
 *
 * Description: this function prints all natural numbers from n to 98.
 *
 * Return: last digit of a number
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else
	{
		printf("%d", 98);
	}
	printf("\n");
}
