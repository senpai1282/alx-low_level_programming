#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Pointer to a pointer to the head of the list
 *
 * Return: The head node’s data (n), or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
    int data;
    listint_t *temp;

    if (*head == NULL)
        return 0;

    temp = *head;
    data = temp->n;
    *head = temp->next;
    free(temp);

    return data;
}
