#include "main.h"

/**
 * flip_bits - count nbr of bites we need to change
 * to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: nbr of bites we need to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}
