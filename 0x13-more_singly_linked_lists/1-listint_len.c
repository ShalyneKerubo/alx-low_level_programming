#include "lists.h"

/**
 * listint_len - returns the no. of elements in a 'listint_t' list.
 * @h: A pointer to the head of the list
 *
 * Return: the no. of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t node = 0;

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		node++;
	}
	return (node);
}
