#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked
 * list_t list.
 *
 * @h: List to count
 *
 * Description: Takes the head of a list and count the amount
 * of nodes.
 *
 * Return: Amount of nodes in list
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h ; i++)
		h = h->next;
	return (i);
}
