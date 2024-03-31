#include "monty.h"
/**
 * print_dlistint - function that prints nodes data in a dlinkedlist
 * @h: header pointer to the dlinked list
 * Return: amount of nodes
 */
size_t print_dlistint(stack_t *h)
{
	int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
