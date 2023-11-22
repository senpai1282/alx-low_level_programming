#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        char *ch = accept;
        while (*ch)
        {
            if (*s == *ch)
                return s;
            ch++;
        }
        s++;
    }
    return NULL;
}

