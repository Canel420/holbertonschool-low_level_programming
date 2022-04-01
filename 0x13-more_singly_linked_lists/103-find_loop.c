#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 *
 * @head: Reference to the head node of list.
 *
 * Description: Looks for a node that is linked to a previous node.
 *
 * Return: Node linked by latter node.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p = head, *fast_p = head;

	if (head == NULL)
		return (NULL);

	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if (slow_p == fast_p)
			return (slow_p);
	}
	return (NULL);
}
