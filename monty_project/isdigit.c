#include "monty.h"
/**
 * _isdigit - function that checks if a char is a digit
 * @c: variable that is asigned the value 0 or 1
 * Return: On success return 1, else 0.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
		return (0);
}
