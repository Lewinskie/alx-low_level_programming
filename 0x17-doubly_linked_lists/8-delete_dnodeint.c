#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given position in a doubly linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted, starting from 0.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int counter = 0;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    while (current != NULL)
    {
        if (counter == index)
        {
            if (current->next != NULL)
                current->next->prev = current->prev;
            if (current->prev != NULL)
                current->prev->next = current->next;
            free(current);
            return (1);
        }
        counter++;
        current = current->next;
    }

    return (-1);
}
