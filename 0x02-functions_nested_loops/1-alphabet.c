#include "main.h"
/**
 * main - Entry point
 * Description: 'prints alphabets a-z to stdout'
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
