#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node of a linked list
 *
 * @head: Pointer to head node of the list.
 * @index: Index node to get.
 *
 * Description: Search for the indexed node in a doubly linked list
 * and returns it.
 *
 * Return: Address to the indexed node or NULL if node doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *x = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (x);
	i = 1;
	while (i < index)
	{
		if (x->next == NULL)
			return (NULL);
		x = x->next;
		i++;
	}
	return (x);
}
