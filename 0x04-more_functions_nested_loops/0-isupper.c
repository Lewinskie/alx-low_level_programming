#include "main.h"
/**
 * _isupper - entry point and checks for uppercase
 * @c: character to check
 * Return: 1 if c is upper else 0
 */
int _isupper(int c)
{
	int upper;

	for (upper = 'A'; upper <= 'Z'; upper++)
		if (c == upper)
			return (1);
	return (0);
}
