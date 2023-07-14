#include <stdio.h>
/**
 * main - Entry point
 * Description - program that writes alphabets in lowercase except e&e
 * Return : always 0 (Successful);
 */
int main(void)
{
	char c;

	for (c = 'a' c <= 'z' && c != 'q' && c != 'e'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
