#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a listint_t list.
 *
 * @h: Head node of the list.
 *
 * Description: Receives the head of a list of integers and prints the
 * data of its nodes.
 *
 * Return: The amount of nodes.
 *
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h ; i++)
	{
		if (h == NULL)
			printf("(NULL)");
		else
			printf("%d\n", h->n);

		h = h->next;
	}
	return (i);
}
