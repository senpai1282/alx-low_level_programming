#include "main.h"

/**
 * check_square - Checks for the natural square root of n.
 * @n: Number to find the square root of.
 * @i: Iterator to check for square root.
 *
 * Return: Square root of n if found, otherwise -1.
 */
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));

	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: Square root of n if found, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
