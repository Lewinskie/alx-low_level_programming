#include <stdio.h>
#include <math.h>

/**
 * main - finds the largest prime factor of a number
 * Return: the largest prime factor of the number
 */
int main(void)
{
	long int x, n = 612852475143;

	while (n % 2 == 0)
	{
		n = n / 2;
	}
	for (x = 3; x < 782849; x += 2)
	{
		while ((n % x == 0) && (n != x))
		{
			n = n / x;
		}
	}
	printf("%lu\n", n);
	return (0);
}
