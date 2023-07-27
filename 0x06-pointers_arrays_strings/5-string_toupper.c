#include "main.h"

/**
 * string_toupper - changes lower to uppercase
 * description: changes to uppercase
 * @str: pointer to string
 * Return: string in uppercase
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A'; /* lower to upper */
		}
		i++;
	}
	return (str);
}
