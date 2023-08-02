#include "main.h"

/**
 * _sqrt - helper function to find the natural square root of a number
 * @n: the number to find the square root of
 * @i: the current divisor to check
 *
 * Return: the natural square root of n, or -1 if n has no natural square root
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion -  returns the natural sqrt of a number
 * @n: number to calculate square root
 * Return: square root of a natural number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
