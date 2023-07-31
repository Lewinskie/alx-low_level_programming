#include <stdio.h>
#include "main.h"
#include <stdbool.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to string
 * @needle: pointer to string to find
 * Return: pointer to beginning of the located substring else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
