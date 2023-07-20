#include "main.h"
/**
 * more_numbers - print 10 times 0-14
 * Return: always 0
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
				_putchar(x / 10 + '0');
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
