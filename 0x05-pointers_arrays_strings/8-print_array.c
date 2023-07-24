#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elemets of array
 * @a: pointer to array
 * @n: number of elements to be printed
 * Return: n elements of array
 */
void print_array(int *a, int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			printf("%d", a[x]);

			/* prints comma and space for all apart from last one */
			if (x < n - 1)
				printf(", ");
		}
		printf("\n");
	}
}
