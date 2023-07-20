#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor for
 * Return: the largest prime factor of the number
 */
long int largest_prime_factor(long int n)
{
	long int largest = -1;
	long int x;

	while (n % 2 == 0)
	{
		largest = 2;
		n = n / 2;
	}
	for (x = 3; x <= sqrt(n); x += 2)
	{
		while (n % x == 0)
		{
			largest = x;
			n = n / x;
		}
	}
	if (n > 2)
	{
		largest = n;
	}
	return (largest);
}
