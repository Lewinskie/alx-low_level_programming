#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/**
 * error_exit - Exit the program with an error code and print an error message.
 * @code: The error code to exit with.
 * @message: The error message to print.
 */

void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

int main(int argc, char *argv[])
{
	int file_from_fd, file_to_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	file_from_fd = open(argv[1], O_RDONLY);
	if (file_from_fd == -1)
		error_exit(98, "Error: Can't read from file");

	file_to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to_fd == -1)
		error_exit(99, "Error: Can't write to file");

	while ((bytes_read = read(file_from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to_fd, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit(99, "Error: Can't write to file");
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file");

	if (close(file_from_fd) == -1)
		error_exit(100, "Error: Can't close fd");

	if (close(file_to_fd) == -1)
		error_exit(100, "Error: Can't close fd");

	return (0);
}
