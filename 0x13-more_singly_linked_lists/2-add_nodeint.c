#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning of a list
 *
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node created
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
