#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * @argc: count of arguments
 * @argv: the commands
 * Return: the command name in index 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
