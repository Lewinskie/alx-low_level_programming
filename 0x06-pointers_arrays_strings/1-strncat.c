#include "main.h"
/**
 * *_strncat - function that concatenates 2 strings
 * @dest: pointer to dest string
 * @src: pointer to source string
 * @n: n bytes
 * Return: string dest concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	/*pointer to start of destination str */
	char *destPointer = dest;

	while (*destPointer != '\0')
		destPointer++;
	/* add src string to dest string up to n characters */
	while (*src != '\0' && n > 0)
	{
		*destPointer = *src;
		destPointer++;
		src++;
		n--;
	}
	/* adding the terminating null byte */
	*destPointer = '\0';
	return (dest);
}
