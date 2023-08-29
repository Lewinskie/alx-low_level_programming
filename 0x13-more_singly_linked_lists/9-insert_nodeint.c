#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node at given position in listint_t linked list.
 * @head: Pointer to a pointer to head of list.
 * @idx: place to add new node. Index starts at 0.
 * @n: Integer to add to the new node.
 * Return: address of new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current = *head;
	unsigned int counter = 0;

	if (idx == 0)
		return (add_nodeint(head, n));

	while (current != NULL)
	{
		if (counter == idx - 1)
		{
			new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = current->next;
		current->next = new;
		return (new);
		}
	counter++;
	current = current->next;
	}

	return (NULL);
}
