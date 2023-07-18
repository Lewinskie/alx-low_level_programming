#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: the character to check
 * Return: if letter, return 1 else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
