#include <stdio.h>
#include <stdlib.h>

/**
 * main - Sum of numbers
 *
 * @argc: Argument count.
 * @argv: Pointer to arguments array.
 *
 * Description: Sum digits passed from command
 * line
 * Return: 0 if arguments are digits, 1 otherwise.
 *
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
