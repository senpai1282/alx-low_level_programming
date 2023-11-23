#include <stdio.h>
#include <stdlib.h>

/**
 * error - print Error and exit with status 98
 */
void error(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * _isdigit - check if a string consists of digits
 * @s: string to check
 * Return: 1 if all characters are digits, 0 otherwise
 */
int _isdigit(char *s)
{
    while (*s)
    {
        if (*s < '0' || *s > '9')
            return (0);
        s++;
    }
    return (1);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    int len1 = 0, len2 = 0, lenres = 0, i, j;
    char *res;

    if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
        error();

    while (argv[1][len1])
        len1++;
    while (argv[2][len2])
        len2++;

    lenres = len1 + len2;
    res = malloc(sizeof(char) * (lenres + 1));
    if (res == NULL)
        return (0);

    for (i = 0; i <= lenres; i++)
        res[i] = '0';

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            int mul = (argv[1][i] - '0') * (argv[2][j] - '0');
            int sum = res[i + j + 1] - '0' + mul;

            res[i + j] += sum / 10;
            res[i + j + 1] = (sum % 10) + '0';
        }
    }

    while (*res == '0' && *(res + 1))
        res++;

    printf("%s\n", res);
    free(res);

    return (0);
}

