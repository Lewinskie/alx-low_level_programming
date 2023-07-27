#include "main.h"

/**
 * *_strcat - concatenates 2 strings
 * @dest: pointer for input 1
 * @src: pointer for string 2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *x = dest; /* pointer to end of dest string */

	/* move the pointer to end of dest string */
	while (*x != '\0')
		x++;
	/* append src string to dest string */
	while (*src != '\0')
	{
		*x = *src;
		x++;
		src++;
	}
	/* add trminating null byte */
	*x = '\0';

	return dest;
}
