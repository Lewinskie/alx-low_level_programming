#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: input int
 * Return: Always 0
 */
void print_times_table(int n)
{
	int x, y;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				int product = x * y;

				if (product < 10)
					_putchar(' ');
				if (product < 100)
					_putchar(' ');
				if (product >= 100)
					_putchar(product / 100 + '0');
				if (product >= 10)
					_putchar((product / 10) % 10 + '0');
				_putchar(product % 10 + '0');
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
}
