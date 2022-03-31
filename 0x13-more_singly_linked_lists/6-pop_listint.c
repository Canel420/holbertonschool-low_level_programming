#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked
 * list
 *
 * @head: Reference to reference fot head node of list.
 *
 * Description: Takes de a linked list and deletes the head node.
 *
 * Return: Data of the deleted node.
 *
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = (*head);
	(*head) = (*head)->next;
	data = temp->n;

	free(temp);

	return (data);
}
