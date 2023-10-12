#include "dlistint.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
    int x = 0;
    dlistint_t *current = head;

    while (current != NULL)
    {
        x += current->n;
        current = current->next;
    }

    return (x);
}
