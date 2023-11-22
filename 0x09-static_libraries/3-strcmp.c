#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: 0 if the strings are equal,
 * otherwise a value less than 0 if s1 is less than s2,
 * or a value greater than 0 if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' || *s2 != '\0')
    {
        if (*s1 != *s2)
        {
            return *s1 - *s2;
        }
        s1++;
        s2++;
    }
    return 0;
}
