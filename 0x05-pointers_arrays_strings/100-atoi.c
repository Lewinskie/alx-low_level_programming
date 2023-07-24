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
	if (s[c] == '-')
	{
		min = -1;
		c++;
	}

	while (s[c] >= '0' && s[c] <= '9')
	{
		ni = (ni * 10) + (s[c] - '0');
		c++;
	}
	ni *= min;
	return ni;
}
int main()
{
	char str[] = "1234";
	int result = _atoi(str);
	printf("Result: %d\n", result);

	char str2[] = "-567";
	int result2 = _atoi(str2);
	printf("Result2: %d\n", result2);

	return (0);
}
