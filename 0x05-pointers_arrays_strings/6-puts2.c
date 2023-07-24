#include "main.h"

/**
 * puts2 -  prints every other char of string
 * @str: pointer to str to be printed
 * Return: strin of characters
 */
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x += 2;

		/* check if we reached end of string */
		if (str[x] == '\0')
			break;
	}
	_putchar('\n');
}
