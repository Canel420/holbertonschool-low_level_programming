#include "main.h"

/**
 * _memset - Function that Fills a block of memory with
 * a particular value.
 *
 * @s: Pointer to an array.
 * @b: Value for memory filling.
 * @n: Unsigned integer for size of block.
 *
 * Description: Fills the first n bytes of memory
 * pointed by s with the value of b.
 *
 * Return: pointer to the value filled array.
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i, c;

	c = (int)n;

	for (i = 0 ; i < c ; i++)
		s[i] = b;
	_putchar('\n');
	return (s);
}
