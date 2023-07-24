#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temporary = *a;
	*a = *b;
	*b = temporary;
}
