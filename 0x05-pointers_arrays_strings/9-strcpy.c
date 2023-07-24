#include "main.h"

/**
 *  _strcpy - Copies a string (including null terminator) from src to dest.
 *  @dest: Pointer to the destination buffer.
 *  @src: Pointer to the source string.
 *  Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0 ; src[x] != '\0'; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	/* copy the null terminator */
	return (dest);
}
