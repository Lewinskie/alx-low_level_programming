#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns number of elements in listint_t list.
 * @h: Pointer to the head of list.
 * Return: no elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
