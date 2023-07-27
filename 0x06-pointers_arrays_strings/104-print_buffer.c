#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a buffer
 * @b: pointer to buffer
 * @size: size of buffer
 * Return: 10 bytes per line
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");
			if (j % 2 != 0)
				printf(" ");
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = b[i + j];
				printf("%c", isprint(c) ? c : '.');
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
