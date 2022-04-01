#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list.
 *
 * @head: Linked list head node for cleaning
 *
 * Description: Delete a linked list that starts at head.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while(head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
