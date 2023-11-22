#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int sign = 1, i = 0;
    unsigned int result = 0;

    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }

    for (; s[i] != '\0'; ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
            result = result * 10 + s[i] - '0';
        else
            break;
    }

    return sign * result;
}
