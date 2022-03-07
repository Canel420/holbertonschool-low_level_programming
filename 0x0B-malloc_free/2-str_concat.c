#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Lenght of a string
 *
 * @str: String to be measure.
 *
 * Description: Count string characters.
 * Return: Number of characters or lenght of string.
 *
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * str_concat - Function that concatenates two strings.
 *
 * @s1: First string to concatenate.
 * @s2: Second string to concatenate.
 *
 * Description: Concatenates two strings using
 * dynamic memory to reserved the strings space.
 *
 * Return: Pointer to concatenated string.
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *two_str;
	int i = 0, j = 0, len;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	len = _strlen(s1) + _strlen(s2) + 1;

	two_str = malloc(len * sizeof(char));

	if (two_str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		two_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		two_str[i] = s2[j];
		i++;
		j++;
	}
	two_str[i] = '\0';

	return (two_str);
}
