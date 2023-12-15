#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: number to get bit from
 * @index: index of the bit to get
 *
 * Return: value of the bit at index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8)) /* Check if index is valid */
        return (-1);

    return ((n >> index) & 1);
}

