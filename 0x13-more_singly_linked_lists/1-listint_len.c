#include "lists.h"

/**
 * listint_len - A function that returns the number of elements
 * in a linked list
 *
 * @h: pointer to list to traverse
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}

	return (x);
}
