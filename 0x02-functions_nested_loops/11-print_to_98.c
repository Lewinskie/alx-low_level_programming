#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n - 98
 * @n: the input to start with
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		for (; n < 99; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
