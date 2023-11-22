#include "main.h"

/**
 * _strcpy - Copies a string including the terminating null byte.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    
    *dest = '\0'; /* Append null terminator to dest */

    return dest;
}

