#include "main.h"
#include <stdio.h>

/**
 * main - Using arguments.
 *
 * @argc: (unused) arguments count.
 * @argv: Pointer to array of arguments.
 *
 * Description: Returns the name of this file.
 * Return: 0
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
