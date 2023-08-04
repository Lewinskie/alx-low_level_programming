#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: count of args
 * @argv: array of the args passed
 * Return: number of args passed
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
