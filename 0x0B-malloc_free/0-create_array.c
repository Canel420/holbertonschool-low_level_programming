#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 *
 * @size: Size of the array.
 * @c: Initialization character.
 *
 * Description: creates an array of chars, and initializes it with a
 * specific character c.
 *
 * Return: Pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		ptr[i] = c;

	return (ptr);
}
