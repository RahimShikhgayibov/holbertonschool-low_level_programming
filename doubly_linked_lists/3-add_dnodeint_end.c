#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A double pointer to the head of the dlistint_t list.
 * @n: The integer to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL; /* It is the last node, so next is always NULL */

	/* Case: The list is empty */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	/* Traverse to the last node */
	while (temp->next != NULL)
		temp = temp->next;

	/* Link the old last node to the new node */
	temp->next = new;
	new->prev = temp;

	return (new);
}
