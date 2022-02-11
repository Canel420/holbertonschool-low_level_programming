#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ldigit = n % 10;

	if (ldigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,
		       ldigit);
	}
	if (ldigit == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	if (ldigit < 6 && ldigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, ldigit);
	}
	return (0);
}
