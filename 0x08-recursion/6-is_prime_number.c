#include "main.h"

/**
 * is_prime_recursive - recursive function to check if a number is prime
 * @n: the number to check
 * @divisor: current divisor being tested
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_recursive(int n, int divisor)
{
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - returns 1 if number is a prime number
 * @n: input to check if its prime or not
 * Return: 1 ifn is prime else 0
 */

int is_prime_number(int n)
{
        if (n <= 1)
                return (0);
        return (is_prime_recursive(n, n - 1));
}
