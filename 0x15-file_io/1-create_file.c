#include "main.h"

/**
 * create_file - Function that creates a file.
 *
 * @filename: Name for the new file.
 * @text_content: Content to write in file.
 *
 * Description: Creates a file with permission read-write owner and writes
 * on it.If file already exist erase its content.
 *
 * Return: 1 on success, -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, f_write, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	f_write = write(fd, text_content, len);
	close(fd);

	if (f_write < 0)
		return (-1);
	return (1);
}
