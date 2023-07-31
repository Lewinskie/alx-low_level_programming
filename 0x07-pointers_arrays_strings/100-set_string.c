#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * set_string -  sets the value of a pointer to a char
 * @s: pointer to s string
 * @to: pointer to the char
 * Return: always 0
 */
void set_string(char **s, char *to)
{
	if (s == NULL)
		return;
	if (s == NULL)
		free(*s);
	*s = malloc(sizeof(char) * (strlen(to) + 1));
	if (*s != NULL)
		strcpy(*s, to);
}
