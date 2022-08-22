#include "main.h"
#include "3-goto_error.c"
/**
 * main - Copies the content of a file-from to file_to file
 * @argc: arguments count
 * @argv: Arguments vector
 * Return: Return 0
 **/
int main(int argc, char **argv)
{
	int fd_source, fd_destination, bytes_read, bytes_written;
	char buff[1024];

	if (argc != 3)
		goto_error("Usage: cp file_from file_to", "", 97);

	fd_source = open(argv[1], O_RDONLY);
	if (fd_source == -1)
		goto_error("Error: Can't read from file ", argv[1], 98);

	fd_destination = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_destination == -1)
	{
		goto_error("Error: Can't write to ", argv[2], 99);
		if (fd_source > 0)
			close(fd_source);
    }

	bytes_read = read(fd_source, buff, 1024);
	while (bytes_read > 0)
	{
		bytes_written = write(fd_destination, buff, bytes_read);
		if (bytes_read != bytes_written)
		{
			goto_error("Error: Can't write to ", argv[2], 99);
			if (fd_source > 0)
				close(fd_source);
		}
		bytes_read = read(fd_source, buff, 1024);
	}

	if (bytes_read == -1)
		goto_error("Error: Can't read from file ", argv[1], 98);

	bytes_read = close(fd_source);
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		exit(100);
	}

	bytes_written = close(fd_destination);
	if (bytes_written < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_destination);
		exit(100);
	}

	return (0);
}

