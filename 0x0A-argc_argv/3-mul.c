#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply arguments in main.
 *
 * @argc: Argument count.
 * @argv: Pointer to array of arguments.
 *
 * Description: Multiply arguments passed from
 * command line.
 * Return: 0 if all arguments are given, 1 if not.
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc > 3 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
