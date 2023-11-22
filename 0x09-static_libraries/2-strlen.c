#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string @s.
 */
unsigned int _strlen(char *s)
{
    unsigned int len = 0;

    while (*s != '\0')
    {
        len++;
        s++;
    }

    return len;
}

