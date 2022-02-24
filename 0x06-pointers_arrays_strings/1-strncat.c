#include "main.h"

/**
 * _strncat - Function that concatenates two strings.
 * @dest: Pointer to a string.
 * @src: Pointer to another string.
 * @n: Integer that limit the amount of bytes in scr string.
 *
 * Description: Takes to string pointers and concatenate the values on
 * them.
 *
 * Return: A pointer to the concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest2 = dest, *resrc = src;
	int i, len = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	/* i need to count src characters */
	while (*src != '\0')
	{
		len++;
		src++;
	}
	/* Here src is at the end */
	/* i need to reset it */

	src = resrc;

	/* n is goin to shit in n=1024 */

	if (n > len)
		n = len;

	for (i = 0 ; i < n ; i++)
		*dest++ = *src++;

	*dest = '\0';

	return (dest2);
}
