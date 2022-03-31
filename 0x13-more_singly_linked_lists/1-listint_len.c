#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked
 * listint_t list.
 *
 * @h: Head node of the list.
 *
 * Description: Receives the head of a list of integers and returns the
 * number of nodes.
 *
 * Return: The amount of nodes.
 *
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h ; i++)
		h = h->next;
	return (i);
}
