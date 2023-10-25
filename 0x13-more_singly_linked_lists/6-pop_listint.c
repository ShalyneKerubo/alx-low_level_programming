#include "lists.h"

/**
 * pop_listint - deletes the head node of a 'listint_t' linked list.
 * @head: double pointer to the head of a list.
 *
 * Return:the head node’s data (n). If the linked list is empty return 0.
 */

int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	node_data = (*head)->n;

	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (node_data);
}
