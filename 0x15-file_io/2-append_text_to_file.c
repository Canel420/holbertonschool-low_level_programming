#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: Name of the file to modify.
 * @text_content: Text to append.
 *
 * Description: Appends content to the end of a given existing file.
 *
 * Return: 1 on success, -1 if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, f_write, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + len))
			len++;
		f_write = write(fd, text_content, len);
	}
	close(fd);
	if (f_write < 0)
		return (-1);
	return (1);
}
