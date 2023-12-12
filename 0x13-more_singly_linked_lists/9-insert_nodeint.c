#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to pointer to head of list
 * @idx: Index of the list where the new node should be added
 * @n: Value to insert into the new node
 *
 * Return: The address of the new node, or NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *temp = *head;
    unsigned int i = 0;

    if (head == NULL)
        return NULL;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    while (i < idx - 1)
    {
        if (temp == NULL || temp->next == NULL)
        {
            free(new_node);
            return NULL;
        }
        temp = temp->next;
        i++;
    }

    new_node->next = temp->next;
    temp->next = new_node;

    return new_node;
}
