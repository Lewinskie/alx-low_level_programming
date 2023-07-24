#include "main.h"

/**
 * _strlen - return the length of a string
 * @str: pointer to thestring
 * Return: length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}

/**
 * puts_half - prints the second half of string
 * @str: pointer to the string
 * Return: half the string
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start;
	int x;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}

	for (x = start; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
