#include <stdio.h>

/**
 * main - Fizz Buzz test
 *
 * Description: Prints the numbers from 1 to 100. For multiples of three prints
 * Fizz and for the multiples of five prints Buzz. For multiples of both three
 * and five prints FizzBuzz..
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1 ; n <= 100 ; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz ");
		else if ((n % 3) == 0)
			printf("Fizz ");
		else if ((n % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
