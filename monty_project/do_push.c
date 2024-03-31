#include "monty.h"
/**
 * do_push - function that get the int of push command
 * @head: pointer to the dblinked list (stack).
 * @line: int that counts the lines of the file
 * Return: value that is an integer
 */
void do_push(stack_t *head, int line)
{
	char *value;
	int i = 0;

	value = strtok(NULL, " ");
	no_breakline(value);
	while (value[i] != '\0')
	{
		if (value[i] == '-')
		{
			i++;
			continue;
		}
		if (_isdigit(value[i]) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	add_dnodeint(&head, atoi(value));
}
