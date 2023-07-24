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
	int sign = 1; /*initializing sign  to + */
	int result = 0;
	int x = 0;

	/* handle the sign characters */
	while (s[x] == '-' || s[x] == '+')
	{
		if (s[x] == '-')
		{
			sign *= -1; /* change sign to - if '-' found */
		}
		x++;
	}
	/* convert reaining digits to int */
	while (s[x] >= '0' && s[x] <= '9')
	{
		/* check for overflow before multiplying by 10 */
		if (result > (INT_MAX - (s[x] - '0')) / 10)
			return (sign == 1 ? INT_MAX : INT_MIN);
		result = result * 10 + (s[x] - '0');
		x++;
	}
	return (result * sign);
}
