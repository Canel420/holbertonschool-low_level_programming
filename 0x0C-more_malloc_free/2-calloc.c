#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array.
 *
 * @nmemb: amount of elements of the array.
 * @size: Size of each element.
 *
 * Description: Creates an array of nmemb elements
 * of size size ant initilize the array with zeros.
 *
 * Return: Array of zeros.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/* nmemb - amount of elements & sizeof() = size */
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0 ; i < nmemb * size ; i++)
		arr[i] = 0;

	return (arr);
}
