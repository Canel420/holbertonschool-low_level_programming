#include "lists.h"

/**
 * count_nodes - Function to count amount of nodes
 *
 * @head: Pointer to head node.
 *
 * Description: Traverse the doubly linked list counting nodes.
 *
 * Return: Nodes count.
 *
 */

unsigned int count_nodes(dlistint_t *head)
{
	dlistint_t *temp = head;
	int i = 0;

	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

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
	unsigned int count = count_nodes(*h), i;
	dlistint_t *temp = *h, *new_node;

	if (temp == NULL || idx > count)
		return (NULL);

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/* Iterate until the index previous node */
	for (i = 0; i < idx - 1; i++)
		temp = temp->next;
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
