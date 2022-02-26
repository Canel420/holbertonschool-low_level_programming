#include "main.h"

/**
 * leet - Function that that encodes a string into 1337.
 *
 * @str: Pointer to a string.
 *
 * Description: Encodes a string.
 * Return: Encoded string.
 *
 */

char *leet(char *str)
{
	int i = 0, j;
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;
		while (l[j] != '\0')
		{
			if (str[i] == l[j])
			{
				str[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
