#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: concatenated string else empty string
 */

char *str_concat(char *s1, char *s2)
{
	char *output;
	int str1_length;
	int str2_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str1_length = strlen(s1);
	str2_length = strlen(s2);

	output = (char *)malloc((str1_length + str2_length + 1) * sizeof(char));
	if (output != NULL)
	{
		strcpy(output, s1);
		strcpy(output, s2);
	}
	return (output);
}
