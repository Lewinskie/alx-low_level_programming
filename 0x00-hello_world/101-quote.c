#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - "
		" Dora Korpar, 2015-10-19 \n";

	write(STDERR_FILENO, message, 58);
	return (1);
}
