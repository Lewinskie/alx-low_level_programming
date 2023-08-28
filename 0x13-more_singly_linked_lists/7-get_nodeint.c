#include <stddef.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Return nth node of listint_t linked list.
 * @head: Pointer to head of the list.
 * @index: Index, starting at 0.
 * Return: Pointer to th node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (counter == index)
			return (current);
		counter++;
		current = current->next;
	}

    return (NULL);
}
