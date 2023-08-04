#include <stdio.h>

/**
 * main - prints all args it receives
 * @argc: count of args passed
 * @argv: array of args
 * Return: one argument it receives per line
 */

int main(int argc, char *argv[])
{
	int x;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
