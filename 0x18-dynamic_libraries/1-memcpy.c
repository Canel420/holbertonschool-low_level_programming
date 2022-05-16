#include "main.h"

/**
 * _memcpy - Function that copy a block of memory into
 * another block.
 *
 * @dest: Pointer to memory space.
 * @src: Pointer to memory space to be copied.
 * @n: Unsigned integer for size of block.
 *
 * Description: Copy the first n bytes of memory from
 * the memory pointed by src into the memory pointed by dest.
 *
 * Return: pointer to copied memory.
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, c;

	c = (int)n;

	for (i = 0 ; i < c ; i++)
		dest[i] = src[i];
	return (dest);
}
