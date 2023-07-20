#include "main.h"
/**
 * print_number - prints integers
 * @n: number to check
 * Return: always 0;
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
