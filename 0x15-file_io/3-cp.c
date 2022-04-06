#include "main.h"

/**
 * close_error - Functions that prints error message on closing.
 *
 * @fd: File descriptor to file for closing.
 *
 * Description: Take the file descriptor of a file and closes it.
 * If it fails prints a message.
 *
 * Return: 1 on success, -1 if it fails.
 */

int close_error(int fd)
{
	int error;

	error = close(fd);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (error);
}

/**
 * main - Program to copy files
 *
 * @argc: Argument count.
 * @argv: Reference to array of arguments.
 *
 * Return: 0 on success.
 *
 */

int main(int argc, char *argv[])
{
	char *buff[1024];
	int in_fd, out_fd, copy = 1024, paste, error;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	in_fd = open(argv[1], O_RDONLY);
	if (in_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	out_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (out_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while (copy)
	{
		copy = read(in_fd, buff, 1024);
		if (copy < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(in_fd);
			close(out_fd);
			exit(98); }
		paste = write(out_fd, buff, copy);
		if (paste < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(in_fd);
			close(out_fd);
			exit(99); } }
	error = close_error(out_fd);
	if (error < 0)
	{
		close_error(in_fd);
		exit(100); }
	error = close_error(in_fd);
	if (error < 0)
		exit(100);
	return (0);
}
