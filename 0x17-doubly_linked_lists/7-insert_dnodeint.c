#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a node at a given position.
 *
 * @h: Pointer to pointer of head node.
 * @idx: Index position for node insertion.
 * @n: Integer data of the new node to insert.
 *
 * Description: Inserts a node at a given position in a doubly linked list.
 *
 * Return: Address to new node or NULL if insertion fails.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp = *h, *new_node;

	if (temp == NULL)
		return (NULL);

	/* Iterate until the index previous node */
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/* make next of new node as next of temp node */
	new_node->next = temp->next;

	/* Make next of temp node as new node */
	temp->next = new_node;

	/* Make temp node as prev of new node */
	new_node->prev = temp;

	/* Change prev of new node's next node */
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
