#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes of s2 to concatenate
 *
 * Return: Pointer to allocated memory with concatenated string
 *         NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;
	new_str = malloc(sizeof(char) * (len1 + n + 1));

	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		new_str[i] = s2[j];

	new_str[i] = '\0';

	return (new_str);
}

