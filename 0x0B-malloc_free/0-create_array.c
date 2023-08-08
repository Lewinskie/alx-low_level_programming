#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: input
 * Return: NULL if size == 0 else array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(size * sizeof(char));

	unsigned int x = 0;

	if (size == 0)
	{
		return (NULL);
	}
	if (arr != NULL)
		while (x < size)
		{
			arr[x] = c;
			x++;
		}
	return (arr);
}
