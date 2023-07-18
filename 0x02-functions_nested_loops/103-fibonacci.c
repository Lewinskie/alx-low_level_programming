#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int n1 = 1, n2 = 2, next, sum = 0;

	while (n2 <= 4000000)
	{
		if (n2 % 2 == 0)
			sum = sum + n2;
		next = n1 + n2;
		n1 = n2;
		n2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
