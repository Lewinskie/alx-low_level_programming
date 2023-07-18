#include "main.h"
/**
 * main - check the code
 * Description: Prints a-z 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int x;
	char c;

	for (x = 0; x < 10; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	}
}
