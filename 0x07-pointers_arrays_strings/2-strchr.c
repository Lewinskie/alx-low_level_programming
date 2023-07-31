#include "main.h"

/**
 * _strchr - locates a character ina string
 * @s: pointer to the string
 * @c: pointer to the character to search for
 * Return: s else NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
