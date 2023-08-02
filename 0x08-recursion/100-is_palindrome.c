#include "main.h"

/**
 * check_palindrome - helper function that looks if palindrome
 * @s: the string to check
 * @start: start index
 * @end: end index
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
        int length = _strlen_recursion(s);

        return (check_palindrome(s, 0, length - 1));
}
