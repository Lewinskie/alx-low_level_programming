#include <stdio.h>
#include "dlistint.h"

/**
 * print_dlistint - Prints elements of a doubly linked list and counts them.
 * @h: pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t x = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		x++;
	}
	return (x);
}
