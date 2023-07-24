#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the input string.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	/* handle the sign characters */
	while (s[c] == 45)
	{
		if (s[c] == '-')
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
		c++;
	}
	ni *= min;
	return (ni);
}
