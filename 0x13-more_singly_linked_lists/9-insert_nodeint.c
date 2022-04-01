#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node at a given
 * position.
 *
 * @head: Reference to reference of head node of a list.
 * @idx: Node where the new node is going to be inserted.
 * @n: Data to save in the new node.
 *
 * Description: Transverse a list an inserts a new node with data n at the
 * idx given position.
 *
 * Return: Reference to new node or NULL if node cannot be added.
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}

	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
