#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - to Print all elements of the listint_t list
 * @h: Pointer to head of the list
 *
 * Return: nbr of nodes
 */
size_t print_listint(const listint_t *h)
	{
		size_t count = 0;

		while (h != NULL)
			{
				printf("%d\n", h->n);
				h = h->next;
				count++;
			}
		return (count);
	}

