#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a
 * dlistint_t linked list.
 * @head: A double pointer to the head of the dlistint_t list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	/* Case 1: Delete the head (Index 0) */
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse to the node at 'index' */
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	/* Case: Index is out of bounds */
	if (temp == NULL)
		return (-1);

	/* Case 2 & 3: Delete middle or last node */
	temp->prev->next = temp->next;

	if (temp->next != NULL) /* If not deleting the very last node */
		temp->next->prev = temp->prev;

	free(temp);

	return (1);
}
