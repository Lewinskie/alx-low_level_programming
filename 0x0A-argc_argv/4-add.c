#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: count of args
 * @argv: array of args
 * Return: Error if non ints, 0 if no args else sum
 */

int main(int argc, char *argv[])
{
	int sum, x, y;

	if (argc == 1)
	{
	printf("0\n");
	}

	sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}	
