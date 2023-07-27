#include "main.h"

/**
 * reverse_array - reverses the array
 * @a: pointer to arrayof int
 * @n: number of elements in array
 * Return: reverse of array
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		/* swap them elements at startand end indices */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		/* move indeces to the mid of arr */
		start++;
		end--;
	}
}
