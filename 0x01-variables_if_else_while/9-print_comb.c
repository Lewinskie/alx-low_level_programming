#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if successful, non-zero otherwise
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x != 8 && y != 9)
			{
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}

