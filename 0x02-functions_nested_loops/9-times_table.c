#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: 0 always
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			int product = x * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product >= 10)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(' ');
				}
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}
