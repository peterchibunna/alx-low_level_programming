#include "main.h"
/**
 * read_textfile - read a text file and prints it to the POSIX standard output
 * @filename: file name or path to file
 * @letters: Number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, num_chars, byte_count;

	if (filename == NULL)
	{
		return (0);
	}
	else
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);

		buffer = malloc(letters * sizeof(char));
		if (buffer == NULL)
			return (0);

		byte_count = read(fd, buffer, letters);
		buffer[byte_count] = 0;
		close(fd);

		if (byte_count == 0)
		{
			free(buffer);
			return (0);
		}

		num_chars = write(STDOUT_FILENO, buffer, byte_count);
		free(buffer);
	}
	return (num_chars);
}

