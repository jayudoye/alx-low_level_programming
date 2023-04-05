#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list
 *
 * @h: pointer to list
 *
 * Return: the number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}

	return (x);
}
