#include <stddef.h>
#include "main.h"

/**
 * get_bit - Returns value of a bit at a given index.
 * @n: Unsigned long int number.
 * @index: Index of the bit you want to get
 * Return: Value of the bit at index index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	while(index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
