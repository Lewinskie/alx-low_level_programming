#include <stdio.h>
/**
 * main - entry point
 * description: compute and print sum of all multiples of 3or 5
 * Return: always 0
 */
int main(void)
{
	int x;
	int sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
			sum += x;
	}
	printf("%d\n", sum);
	return (0);
}
