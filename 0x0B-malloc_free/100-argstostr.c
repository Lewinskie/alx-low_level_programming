#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concats
 * @ac: pointer to int
 * @av: pointer to str
 * Return: always 0
 */
char *argstostr(int ac, char **av)
{
	int length;
	char *result;
	int i;
	int position;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	length = 0;

	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}

	result = (char *)malloc(length * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	position = 0;


	for (i = 0; i < ac; i++)
	{
		strcpy(result + position, av[i]);
		position += strlen(av[i]);
		result[position++] = '\n';
	}
	result[length - 1] = '\0';

	return (result);
}
