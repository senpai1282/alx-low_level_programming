#include "main.h"

/**
 * check_prime - Checks if a number is prime.
 * @n: Number to check for being prime.
 * @i: Iterator to check divisibility.
 *
 * Return: 1 if prime, 0 if not.
 */
int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
