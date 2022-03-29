#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning of a list_t list.
 *
 * @head: Reference to current head of the list.
 * @str: New node string data.
 *
 * Description: Adds a new node to the referenced list that starts at head.
 *
 * Return: The new node added.
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(new_node->str);
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
