#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A double pointer to the head of the dlistint_t list.
 * @idx: The index of the list where the new node should be added.
 * @n: The integer to store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int i;

	/* Case 1: Insert at the beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse to the node *before* the insertion point */
	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;

	/* Case: Index is out of range */
	if (temp == NULL)
		return (NULL);

	/* Case 2: Insert at the end */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Case 3: Insert in the middle */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
