#include "main.h"
#include <stdio.h>

/**
 * main - Number of arguments passed to main.
 *
 * @argc: Arguments count.
 * @argv: (unused) Pointer to array of arguments.
 *
 * Description: Gives the number of arguments passed
 * from command line to main function.
 * Return: 0.
 *
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
