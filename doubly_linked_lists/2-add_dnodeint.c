#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A double pointer to the head of the dlistint_t list.
 * @n: The integer to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;     /* It's the new head, so prev is always NULL */
	new->next = *head;    /* Point to the old head */

	/* If the list wasn't empty, update the old head's prev pointer */
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;          /* Move the head pointer to the new node */

	return (new);
}
