#include "main.h"

/**
 * infinite_add - adds 2 numbers
 * @n1: pointer to 1st no
 * @n2: pointer to 2nd no
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, sum = 0, carry = 0;

	while (n1[i] != '\0' || n2[j] != '\0')
	{
		int digit1 = (n1[i] != '\0') ? n1[i++] - '0' : 0;
		int digit2 = (n2[j] != '\0') ? n2[j++] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[k++] = (sum % 10) + '0';

		if (k >= size_r - 1)
			return (0);
	}
	if (carry)
	{
		if (k >= size_r - 1)
			return (0);
		r[k++] = carry + '0';
	}
	r[k] = '\0';
	return (r);
}
