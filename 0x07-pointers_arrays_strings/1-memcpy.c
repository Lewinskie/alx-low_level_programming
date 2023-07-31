#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies n bytes from memory area to memory area dest
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to cpy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
