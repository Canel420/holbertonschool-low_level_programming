#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data (n)
 * a listint_t linked list
 *
 * @head: Reference to the head node of a list.
 *
 * Description: Takes the head node and traverse the whole list
 * taking the data n and adding it.
 *
 * Return: The sum of all n data of the nodes.
 */

int sum_listint(listint_t *head)
{
	int i, sum = 0;

	for (i = 0; head; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
