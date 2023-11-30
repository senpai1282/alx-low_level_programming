#include <stdio.h>
#include <stdlib.h>

void print_opcodes(unsigned char *ptr, int bytes);

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 on success, 1 for incorrect number of arguments, 2 for negative bytes
 */
int main(int argc, char *argv[])
{
	int bytes;

    	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return 2;
	}

	void *(*func_ptr)(void *, int, char **) = (void *(*)(void *, int, char **))&main;

	print_opcodes((unsigned char *)func_ptr, bytes);

	return 0;
}

void print_opcodes(unsigned char *ptr, int bytes)
{
	int i;

	for (i = 0; i < bytes; i++)
	{
	printf("%02x", *(ptr + i));
	if (i != bytes - 1)
		printf(" ");
	}
	printf("\n");
}
