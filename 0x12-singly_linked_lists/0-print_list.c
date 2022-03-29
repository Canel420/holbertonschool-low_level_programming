#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list.
 *
 * @h: List to print
 *
 * Description: Take the elements of a given list of structure list_t
 * and print them.
 *
 * Return: Amount of elements in list.
 */

size_t print_list(const list_t *h)
{
	unsigned int i;

        for (i = 0; h ; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
	}
	return (i);
}
