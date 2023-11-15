#include "main.h"

/**
 * helperFunction - Finds the square root recursively using binary search.
 * @num: Number to find the square root of.
 * @pSqrt: Potential square root to be checked.
 *
 * Return: The square root of num if found, otherwise -1.
 */
int helperFunction(int num, int pSqrt)
{
	if (pSqrt * pSqrt == num)
		return (pSqrt);

	if (pSqrt * pSqrt > num)
		return (-1);

	return helperFunction(num, pSqrt + 1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n if found, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return helperFunction(n, 0);
}
