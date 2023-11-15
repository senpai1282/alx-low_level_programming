#include "main.h"

/**
 * check_prime - Helper function to check if a number is prime.
 * @n: Number to be checked.
 * @i: Iterator variable for checking divisibility.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int check_prime(int n, int i)
{
    if (n <= 2)
        return (n == 2); // Return 1 if n is 2, else return 0

    if (n % i == 0)
        return (0); // n is divisible by i, not a prime number

    if (i * i > n)
        return (1); // Reached the square root of n, it's a prime number

    return check_prime(n, i + 1); // Check divisibility with the next iterator
}

/**
 * is_prime_number - Checks if an input integer is a prime number.
 * @n: Number to be checked.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0); // Numbers less than or equal to 1 are not prime

    return (check_prime(n, 2)); // Start checking from divisor 2
}
