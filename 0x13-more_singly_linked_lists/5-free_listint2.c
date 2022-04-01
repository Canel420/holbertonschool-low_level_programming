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
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
