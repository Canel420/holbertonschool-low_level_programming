#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list.
 *
 * @head: Reference to reference of the head node of list.
 *
 * Description: Take a list with double pointer reference to head
 * and deletes it.
 *
 */

void free_listint2(listint_t **head)
{
	/* Deref head to get the real head */
	listint_t *current = *head;
	listint_t *next;

	if (*head == NULL)
		return;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	/* Deref head to affect the real head back in the caller */
	*head = NULL;
}
