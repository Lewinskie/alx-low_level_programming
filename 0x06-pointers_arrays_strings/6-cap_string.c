#include "main.h"

/**
 * cap_string - capitalizes all words od a string
 * @str: pointer to the string
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	/* Indicates if the next character should be capitalized */
	int capitalize_next = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Check if the current character is a separator */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' ||  str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			/* Next character should be capitalized */
			capitalize_next = 1;
		}
		/* Check if the current character is an alphabet character */
		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			/* Capitalize the character if needed */
			if (capitalize_next)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					/* Convert lowercase to uppercase */
					str[i] = str[i] - 'a' + 'A';
				}
				/* Next character should not be capitalized */
				capitalize_next = 0;
			}
		}
		/* Skip any other characters (digits, special characters, etc.) */
	}
	return (str);
}
