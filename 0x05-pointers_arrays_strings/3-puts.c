#include "main.h"

/**
 * _puts - prints a string followedby new line
 * @str: pointer to string to print
 * Return: print string
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
