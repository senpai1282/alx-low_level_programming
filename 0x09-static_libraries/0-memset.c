#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory area with.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
    if (n > 0)
    {
        char *ptr = s;
        unsigned int i;

        for (i = 0; i < n / sizeof(char); i++)
            *(ptr + i) = b;

        for (i = n - (n % sizeof(char)); i < n; i++)
            *(s + i) = b;
    }

    return s;
}
