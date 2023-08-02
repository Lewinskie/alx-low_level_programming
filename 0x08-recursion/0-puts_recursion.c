#include "main.h"

/**
 * _puts_recursion - takes in a string and prints it ,adds a new line after
 * @s: pointer to the input string
 * Return: prints a string followed by a new line
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
