#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a
 * 'listint_t' linked list.
 * @head: pointer to the head of a list
 *
 * Return: sum of all the data (n) of a 'listint_t' linked list;
 * if the list is empty, return 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		tmp = head;
		sum += tmp->n;
		head = head->next;
	}
	return (sum);
}
