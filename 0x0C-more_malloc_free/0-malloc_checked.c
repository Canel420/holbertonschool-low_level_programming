#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc
 *
 * @b: Size in bytes for memory allocation.
 *
 * Description: Allocates memory of size b dynamically
 *
 * Return: Pointer to memory allocation or 98 in case
 * malloc fails.
 *
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);

	return (m);
}
