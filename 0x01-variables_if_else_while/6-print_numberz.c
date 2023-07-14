#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if successful, non-zero otherwise
 */
int main(void)
{
	int x;

	for (x = 0; x <= 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
