#include <stdio.h>
/**
 * main - Entry point
 * Description - program that writes alphabets in lowercase except e&e
 * Return: 0 if successful, non zero otherwise
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
