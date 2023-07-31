#include "main.h"
#include <stdbool.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: checks for this in s
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	bool found = false;
	char *a;

	while (*s != '\0')
	{
		found = false;

		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				found = true;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
