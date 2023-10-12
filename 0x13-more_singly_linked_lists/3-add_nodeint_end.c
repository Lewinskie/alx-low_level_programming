#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - Adds new node at the end of listint_t list.
 * @head: Pointer to a pointer to head of the list.
 * @n: Integer to be added to the new node.
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}