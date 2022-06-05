#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key.
 *
 * @key: key of the hash table.
 * @size: size of the array of the hash table.
 *
 * Description: calculates the index of a key with djb2
 *              algorithm
 * Return: index at which the key/value pair should be
 *         stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);
	return (index % size);
}
