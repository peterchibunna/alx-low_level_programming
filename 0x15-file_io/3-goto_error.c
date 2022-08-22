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

