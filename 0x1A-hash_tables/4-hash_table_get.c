#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key.
 *
 * @ht: hash table to look into.
 * @key: key.
 * Return: value associated with the key, or NULL if it couldn’t be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	if (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}
	return (NULL);
}
