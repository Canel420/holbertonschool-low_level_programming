#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 *
 * @size: amount of items in the hash table.
 *
 * Description: Creates an empty hash table of a given size.
 * Return: Pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = NULL;
	unsigned long int i;

	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);

	h_table->size = size;
	h_table->array = malloc(size * sizeof(hash_node_t *));
	if (!h_table->array)
	{
		free(h_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		h_table->array[i] = NULL;
	return (h_table);
}
