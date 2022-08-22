/**
 * goto_error - Print the error and close the file descriptor
 * @msg: Error message to show
 * @opt: Optional arguments
 * @status: Exit status code
 **/
void goto_error(char *msg, char *opt, int status)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, opt);
	exit(status);
}

