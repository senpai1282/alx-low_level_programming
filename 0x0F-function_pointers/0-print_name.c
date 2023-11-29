#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name according to the specified printing function
 * @name: Name to be printed
 * @f: Pointer to the function used to print the name
 *
 * Description: This function takes a name and a function pointer. It uses
 * the function pointer to print the name in a specified manner.
 */

void print_name(char *name, void (*f)(char *))
	{
		if (name != NULL && f != NULL)
			f(name);
	}
