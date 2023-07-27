#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	/* if both strs  are eqaul check for extra chars */
	if (*s1 != '\0')
	{
		return (*s1);
	}
	else if (*s2 != '\0')
	{
		return (-*s2);
	}
	return (0); /* Return 0 if both strings are identical */
}
