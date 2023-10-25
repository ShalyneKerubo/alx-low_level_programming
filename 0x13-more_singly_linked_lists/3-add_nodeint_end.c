#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a 'listint_t' list
 * @head: double pointer to the head of the list
 * @n: constant integer
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *tmp_n_d;

	n_node = malloc(sizeof(listint_t));

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
		*head = n_node;
	else
	{
		tmp_n_d = *head;
		while (tmp_n_d->next)
			tmp_n_d = tmp_n_d->next;

		tmp_n_d->next = n_node;
	}
	return (n_node);
}
