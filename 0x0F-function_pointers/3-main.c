#include "3-calc.h"

/**
 * main - Test function get_op_func() works
 *
 * @argc: Arguments count.
 * @argv: Pointer to array of arguments.
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
