#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes node at index index of listint_t linked list.
 * @head: Pointer to a pointer to head of list.
 * @index: Index of the node to be deleted. Index starts at 0.
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current != NULL && counter < index - 1)
	{
		current = current->next;
		counter++;
	}

	if (current == NULL || counter != index - 1 || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
