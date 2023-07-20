#include "main.h"
/**
 * print_line - draw a straight line
 * @n: input to check
 * Return: always 0
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
