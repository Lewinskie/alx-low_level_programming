#include <stdio.h>
#include <unstd.h>
/**
 * main - check the code
 * _putchar - writes the character c to stdout
 * @c: the character to write
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 * Return: Always 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar('z');
	}
	_putchar('\n');
	return (0);
}
