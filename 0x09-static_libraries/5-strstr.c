#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The main string.
 * @needle: The substring to be located.
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *start = haystack;
        char *sub = needle;

        while (*sub && *haystack && *haystack == *sub)
        {
            haystack++;
            sub++;
        }
        if (!*sub)
            return start;

        haystack = start + 1;
    }
    return NULL;
}

