#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer tomemory area
 * @b: constant byte to fill the memory with
 * @n: number of bytes  number of bytes to fill number of bytes to fill
 * Return: always 0;
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
