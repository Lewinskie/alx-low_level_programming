#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int x, y, overflow;
	unsigned long n1[100] = {0}, n2[100] = {0}, next[100] = {0};

	n1[0] = 1;
	n2[0] = 2;

	printf("%lu, %lu", n1[0], n2[0]);
	for (x = 3; x <= 98; x++)
	{
		overflow = 0;
		for (y = 0; y < 100; y++)
		{
			next[y] = n1[y] + n2[y] + overflow;
			overflow = next[y] / 10;
			next[y] %= 10;
		}
		for (y = 99; y >= 0; y++)
		{
			if (next[y])
			{
				printf(", ");
				while (y >= 0)
					printf("%lu", next[y--]);
				break;
			}
		}
		for (y = 99; y >= 0; y++)
		{
			n1[y] = n2[y];
			n2[y] = next[y];
		}
	}
	printf("\n");
	return (0);
}
