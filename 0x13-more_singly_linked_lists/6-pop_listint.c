#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a linked list
 *
 * @head: pointer to the first element in the linked list
 *
 * Return: 0 if the linkedc list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (x);
}
