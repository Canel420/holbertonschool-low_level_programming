#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table.
 *
 * @ht: hash table.
 * @key: key.
 * @value: value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *tmp = NULL;
	unsigned long int index = 0;
	char *new_value = NULL;

	if (!ht || !key || !value || strlen(key) == 0 || ht->size == 0)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	strcpy(new->key, key);
	strcpy(new->value, value);
	new->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (!new_value)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
