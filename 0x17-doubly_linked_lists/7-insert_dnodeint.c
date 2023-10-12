#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 *                            doubly linked list.
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be added, starting from 0.
 * @n: The value to store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current = *h;
    unsigned int count = 0;

    if (idx == 0)
        return (add_dnodeint(h, n));

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    while (current != NULL)
    {
        if (count == idx - 1)
        {
            new_node->prev = current;
            new_node->next = current->next;
            if (current->next != NULL)
                current->next->prev = new_node;
            current->next = new_node;
            return (new_node);
        }
        count++;
        current = current->next;
    }

    free(new_node);
    return (NULL);
}
