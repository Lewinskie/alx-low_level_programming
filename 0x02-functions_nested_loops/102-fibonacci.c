#include <stdio.h>
/**
 * main - entry point
 * description: fibonacci series
 * Return: always 0
 */
int main(void)
{
	unsigned long n1 = 1, n2 = 2, next;
	int x;

	printf("%lu, %lu", n1, n2);
	for (x = 3; x <= 50; x++)
	{
		next = n1 + n2;
		printf(", %lu", next);
		n1 = n2;
		n2 = next;
	}
	printf("\n");
	return (0);
}
