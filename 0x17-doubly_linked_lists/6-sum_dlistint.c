#include "lists.h"

/**
 * sum_dlistint - Function that sums the content of the nodes
 *
 * @head: Pointer to head node of a doubly linked list
 *
 * Description: Traverse the linked list and sum the item n from all nodes.
 *
 * Return: Sum of the content of the nodes.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	dlistint_t *next;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (node != NULL)
	{
		next = node->next;
		sum += node->n;
		node = next;
	}
	return (sum);
}
