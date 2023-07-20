#include "main.h"
/**
 * _isdigit - checks for a digit through 0-9
 * @c: character to check
 * Return: 1 if c is a digit else 0
 */
int _isdigit(int c)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
		if (c == digit)
			return (1);
	return (0);
}
