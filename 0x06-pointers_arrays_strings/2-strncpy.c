#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of characters to copy to dest
 * Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	/* now if length of src < n, add null bytes */
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
