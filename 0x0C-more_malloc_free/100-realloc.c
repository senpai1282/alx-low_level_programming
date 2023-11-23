#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc(old_size)
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the memory block
 *
 * Return: pointer to the newly allocated memory block
 *         NULL if new_size is equal to zero and ptr is not NULL
 *         NULL if malloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
    void *new_ptr;
    char *old_ptr, *new_ptr_char;
    unsigned int i;

    if (new_size == old_size)
        return (ptr);

    if (ptr == NULL)
        return (malloc(new_size));

    if (new_size == 0 && ptr != NULL) {
        free(ptr);
        return (NULL);
    }

    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return (NULL);

    old_ptr = ptr;
    new_ptr_char = new_ptr;

    for (i = 0; i < old_size && i < new_size; i++)
        new_ptr_char[i] = old_ptr[i];

    free(ptr);
    return (new_ptr);
}

