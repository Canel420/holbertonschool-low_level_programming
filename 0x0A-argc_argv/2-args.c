#include "main.h"
#include <stdio.h>

/**
 * main - Arguments in main
 *
 * @argc: Argument count.
 * @argv: Pointer to arguments array.
 *
 * Description: Prints arguments input in command line
 * to function main follow by a new line.
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
