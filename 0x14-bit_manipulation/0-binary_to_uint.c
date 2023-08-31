#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 * Return: The converted number, or 0 if the string contains non-binary characters or is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int pow = 1;
	int length = 0;
	int i;

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			res += pow;
		pow *= 2;
	}

	return (res);
}
