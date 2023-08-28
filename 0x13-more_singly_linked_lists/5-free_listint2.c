#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees listint_t list and sets head to NULL.
 * @head: Pointer to a pointer to head of the list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
