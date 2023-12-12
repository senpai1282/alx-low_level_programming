#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list (handles loops)
 * @h: Pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current, *temp;

    if (!h || !(*h))
        return 0;

    current = *h;

    while (current)
    {
        count++;
        temp = current;
        current = current->next;

        /* Break the loop */
        temp->next = NULL;

        free(temp);

        /* If freed list reaches the current pointer, break to avoid infinite loop */
        if (temp == *h)
        {
            *h = NULL;
            break;
        }
    }

    *h = NULL;

    return count;
}
