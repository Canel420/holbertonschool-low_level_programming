#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters of
 * a string to uppercase.
 *
 * @str: Pointer to an array of strings.
 *
 * Description: Change lowercase characters to uppercase characters.
 * Return: A pointer to the changed string.
 *
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
