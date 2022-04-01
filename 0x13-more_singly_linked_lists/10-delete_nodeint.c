#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node at index index of
 * a listint_t linked list.
 *
 * @head: Reference to reference to head node of list.
 * @index: Node to be delete.
 *
 * Description: Transverse a linked list until the node indicated by index
 * and deletes it.
 *
 * Return: 1 on success or -1 if function fail.
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		del = temp;
		del = del->next;
		temp->next = del->next;
	}
	return (1);
}
