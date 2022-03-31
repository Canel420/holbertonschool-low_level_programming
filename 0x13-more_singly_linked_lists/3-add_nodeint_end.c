#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at the end of a listint_t
 * list.
 *
 * @head: Reference of reference of the head node of a list.
 * @n: Content for the new node.
 *
 * Description: Takes a linked list and insert a node at the end.
 *
 * Return: Reference to the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head;

	/* allocate new node space */
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/* Put in data inside new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If no list is given, new node will be the whole list */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Else traverse till the last node */
	while (last->next != NULL)
		last = last->next;
	/* change the next of last node to new node */
	last->next = new_node;

	return (new_node);
}
