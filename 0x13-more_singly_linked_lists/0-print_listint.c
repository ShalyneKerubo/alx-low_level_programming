#include "lists.h"

/**
 * print_listint - prints all the elements of a 'listint_t' list.
 * @h: a pointer to the head of the list
 *
 * Return: no. of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *tmp;

	i = 0;
	tmp = h;
	
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}

	return (i);
}
