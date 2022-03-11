#include "main.h"
#include <stdlib.h>

/**
 * str_len - Function that measures a string.
 *
 * @s: Pointer to a string
 *
 * Description: Count the number of characters in a string,
 *
 * Return: An unsigned integer for number of characters.
 */

unsigned int str_len(char *s)
{
	unsigned int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * string_nconcat - Function that concatenates two strings.
 *
 * @s1: First string.
 * @s2: Second string.
 * @n: Amount of bytes to be concatenated from s2.
 *
 * Description: Concatenates two string, first reserving space
 * then copying first string plus n bytes from second string.
 *
 * Return: Pointer to concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len = 0;
	char *str_nc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Measure the length needed for malloc */
	if (str_len(s2) <= n)
		len = str_len(s1) + str_len(s2) + 1;
	else
		len = str_len(s1) + n + 1;

	/* Reserved the space for a string concatenation */
	str_nc = malloc(sizeof(char) * len);

	if (str_nc == NULL)
		return (NULL);

	/* Initialize the space copying the strings -first s1 */
	for (i = 0 ; s1[i] != '\0' ; i++)
		str_nc[i] = s1[i];

	/* Then, the first n characters from s2 */
	for (j = 0 ; j <= n ; j++)
	{
		str_nc[i] = s2[j];
		i++;
	}
	str_nc[i] = '\0';

	return (str_nc);
}
