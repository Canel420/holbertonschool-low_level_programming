#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: File to print.
 * @letters: Amount of characters in file.
 *
 * Description: Read a file and print its contents.
 * Return: Amount of characters printed.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t f_read, f_write;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buff = (char *)malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	f_read = read(fd, buff, letters);
	if (f_read < 0)
	{
		free(buff);
		return (0);
	}
	f_write = write(STDOUT_FILENO, buff, f_read);
	free(buff);
	close(fd);

	if (f_write < 0)
		return (0);
	return (f_write);
}
