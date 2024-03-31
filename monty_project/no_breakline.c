#include "monty.h"
/**
 * no_breakline - function that changes enter key for end of line character
 * @buffer: pointer that stores the stdinput.
 * Return: buffer.
 */
char *no_breakline(char *buffer)
{
	int buff_size = 0;

	buff_size = strlen(buffer);
	buffer[buff_size - 1] = '\0';
	return (buffer);
}
