#include <stdio.h>
#include "main.h"
#include <stdbool.h>

/**
 * _strpbrk - searches for a string for any of a set of bytes
 * @s: pointer to string
 * @accept: bytes to serach for
 * Return: s else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
