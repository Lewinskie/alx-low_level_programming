#include <stddef.h>
#include "lists.h"
/**
 * sum_listint - Return sum of all data of listint_t linked list.
 * @head: Pointer to head of the list.
 * Return: sum of all data, or 0 if list empty.
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	
	listint_t *current = head;

	while (current != NULL)
	{
		total += current->n;
		current = current->next;
	}

	return (total);
}
