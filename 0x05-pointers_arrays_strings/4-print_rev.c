#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 * @s: Pointer to the string
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to the string to be printed in reverse
 * Retur: string in reverse
 */
void print_rev(char *s)
{
	int length = _strlen(s);
	int x;

	for (x = length - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
