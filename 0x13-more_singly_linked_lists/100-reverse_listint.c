#include "lists.h"

/**
 * reverse_listint - Function that reverses a listint_t linked list.
 *
 * @head: Reference to reference of head node of list.
 *
 * Description: Change the links of the nodes to reverse the list.
 *
 * Return: Reference to reverse list.
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
