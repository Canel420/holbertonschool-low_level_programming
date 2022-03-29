#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 *
 * @head: Reference to the list head.
 *
 * Description: Uses free to deallocate memory in list.
 *
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	head = NULL;
}
