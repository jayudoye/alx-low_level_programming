#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t list
 *
 * @h: pointer to the first node in the linked list
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int x;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
