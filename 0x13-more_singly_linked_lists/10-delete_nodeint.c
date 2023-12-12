#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index of  listint_t linked list
 * @head: pointer to pointer to the head node
 * @index: index of node to delete
 *
 * Return: 1 if success , -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        temp = *head;
        *head = temp->next;
        free(temp);
        return (1);
    }

    current = *head;
    for (i = 0; current != NULL && i < index - 1; i++)
        current = current->next;

    if (current == NULL || current->next == NULL)
        return (-1);

    temp = current->next;
    current->next = temp->next;
    free(temp);

    return (1);
}
