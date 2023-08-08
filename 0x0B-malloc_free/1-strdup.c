#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a given string using dynamic mem alocation
 * @str: pointer to string
 * Return: pointer to the duplicated string else NULL
 */
char *_strdup(char *str)
{
	char *dup;
	int length;

	if (str == NULL)
		return (NULL);
	length = strlen(str); /* Get str length */

	dup = (char *)malloc((length + 1) * sizeof(char));

	if (dup != NULL)
		strcpy(dup, str);
	return (dup);
}
