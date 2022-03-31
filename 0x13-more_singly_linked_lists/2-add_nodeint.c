#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of a
 * listint_t list.
 *
 * @head: Head node of the list
 * @n: Integer data for the new node.
 *
 * Description: Takes a linked list head node and add a new node with n
 * content.
 *
 * Return: Address to the new node.
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	if (head == NULL)
	{
		free(new_node);
		return (NULL);
	}
	(*head) = new_node;

	return (new_node);
}
