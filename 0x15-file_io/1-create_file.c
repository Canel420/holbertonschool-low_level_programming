#include "main.h"

/**
 * _strlen - Measures a string.
 *
 * @s: String to be measured.
 *
 * Description: Count the number of characters in string.
 *
 * Return: Count.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

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
	int new, len = 0, f_write;

	if (filename == NULL)
		return (-1);

	len = _strlen(text_content);

	new = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (new < 0)
		return (-1);

	f_write = write(new, text_content, len);
	close(new);

	if (f_write < 0)
		return (-1);
	return (1);
}
