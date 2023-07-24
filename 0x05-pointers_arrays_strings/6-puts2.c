#include "main.h"

/**
 * puts2 -  prints every other char of string
 * @str: pointer to str to be printed
 * Return: strin of characters
 */
void puts2(char *str)
{
	int x = 0;

	for (x = 0; str[x] != '\0'; x += 1)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar('\n');
}
