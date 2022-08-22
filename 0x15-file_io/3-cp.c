#include "main.h"
#include "3-goto_error.c"
/**
 * main - copies the content of a file to another file.
 * @argc: arguments count
 * @argv: Argument vector
 *
 * Return: Return 0
 **/
int main(int argc, char **argv)
{
	int fd_from, fd_to, b_readed, b_writed;
	int buffer_size = 1024;
	char buff[1024];

	if (argc != 3)
		print_error("Usage: cp file_from file_to", "", 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file ", argv[1], 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_and_close_fd("Error: Can't write to ", argv[2], 99, fd_from);

	b_readed = read(fd_from, buff, buffer_size);
	while (b_readed > 0)
	{
		b_writed = write(fd_to, buff, b_readed);
		if (b_readed != b_writed)
			print_and_close_fd("Error: Can't write to ", argv[2], 99, fd_from);

		b_readed = read(fd_from, buff, buffer_size);
	}

	if (b_readed == -1)
		print_error("Error: Can't read from file ", argv[1], 98);

	b_readed = close(fd_from);
	if (b_readed < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	b_writed = close(fd_to);
	if (b_writed < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}

