#include "lists.h"
#include <stdbool.h>

/**
 * free_listint2 - frees a 'listint_t' list
 * @head: a double pointer to the head of the list
 * The function sets the head to NULL
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	bool first = true;
	listint_t *tmp;

	if (*head == NULL)
		return;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);

		if (first)
		{
			tmp = NULL;
			first = false;
		}
	}
}
