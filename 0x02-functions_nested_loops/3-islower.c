#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: the character to check
 * Return: if lowercase 1 else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
