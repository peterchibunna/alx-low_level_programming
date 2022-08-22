#include "main.h"

void print_and_close_fd(char *msg, char *extra, int status, int fd);
void print_error(char *msg, char *extra, int status);


/**
 * print_and_close_fd - Print the error and close the file descriptor
 * @msg: message to show
 * @extra: Extra optional arguments
 * @status: Exit status code
 * @fd: File descriptor
 **/
void print_and_close_fd(char *msg, char *extra, int status, int fd)
{
	if (fd > 0)
	{
		close(fd);
	}
	print_error(msg, extra, status);
}

/**
 * print_error - Print the error and close the file descriptor
 * @msg: message to show
 * @extra: Extra arguments
 * @status: Exit status code
 **/
void print_error(char *msg, char *extra, int status)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, extra);
	exit(status);
}

/**
 * main -[?12;4$y copies the content of a file to another file.
 * @argc: arguments count
 * @argv: Argument vector
 *
 * Return: Return 0
 **/
int main(int argc, char **argv)
{
	int fd_source, fd_dest, bytes_read, bytes_written;
	int buffer_size = 1024;
	char buff[1024];

	if (argc != 3)
		print_error("Usage: cp file_from file_to", "", 97);

	fd_source = open(argv[1], O_RDONLY);
	if (fd_source == -1)
		print_error("Error: Can't read from file ", argv[1], 98);

	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
		print_and_close_fd("Error: Can't write to ", argv[2], 99, fd_source);

	bytes_read = read(fd_source, buff, buffer_size);
	while (bytes_read > 0)
	{
		bytes_written = write(fd_dest, buff, bytes_read);
		if (bytes_read != bytes_written)
			print_and_close_fd("Error: Can't write to ", argv[2], 99, fd_source);

		bytes_read = read(fd_source, buff, buffer_size);
	}

	if (bytes_read == -1)
		print_error("Error: Can't read from file ", argv[1], 98);

	bytes_read = close(fd_source);
	if (bytes_read < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source), exit(100);

	bytes_written = close(fd_dest);
	if (bytes_written < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest), exit(100);

	return (0);
}

