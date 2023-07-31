#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of 2 diagonals of a sq matrix
 * @a: pointer to the matrix
 * @size: size of the matrix
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int sum_2 = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		sum_1 += a[x * size + 1];
		sum_2 += a[x * size + (size - 1 - x)];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
