#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * rev_string - reverse a string
 * @s: pointer to the string to reverse
 * Return: reversed string
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int start = 0;
	int end = length - 1;
	char temp;

	while (start < end)
	{
		/* swap characters at start and end pointers */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move the pointers towards the center of string */
		start++;
		end--;
	}
}
