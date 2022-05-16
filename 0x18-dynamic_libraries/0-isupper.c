#include "main.h"

/**
 * _isupper -Checks for uppercase character.
 * @c: Character to be checked.
 * Description: This function takes a character as input and checks if
 * is uppercase or not.
 *
 * Return: 1 if character is uppercase or 0 if not.
 */

int _isupper(int c)
{
	char u;
	int value;

	value = 0;

	for (u = 'A' ; u <= 'Z' ; u++)
	{
		if (c == u)
			value = 1;
	}
	return (value);
}
