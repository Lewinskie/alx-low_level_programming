#include "main.h"

/**
 * leet - encodes string to 1337
 * @str: pointer to string
 * Return: encoded string
 */
char *leet(char *str)
{
	char *leet_letters = "aAeEoOtTlL";
	char *leet_numbers = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_letters[j] != '\0'; j++)
		{
			if (str[i] == leet_letters[j])
			{
				str[i] = leet_numbers[j];
				break;
			}
		}
	}
	return (str);
}
