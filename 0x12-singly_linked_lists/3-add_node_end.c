#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 *
 * @head: Pointer to the head of the list.
 * @str: Data for the node to be added.
 *
 * Description: Adds a node at the end of a linked list that starts at head.
 *
 * Return: The new node.
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	last = *head;

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new_node;

	return (new_node);
}
