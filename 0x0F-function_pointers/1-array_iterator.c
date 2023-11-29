#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Array of integers
 * @size: Size of the array
 * @action: Pointer to the function to be executed on each element
 *
 * Description: This function takes an array of integers, its size, and a
 * function pointer. It applies the given function to each element of the array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
	{
		size_t i = 0;

		if (array != NULL && action != NULL)
			{
				while (i < size)
					{
						action(array[i]);
						i++;
					}
			}
		(void)size;
	}
