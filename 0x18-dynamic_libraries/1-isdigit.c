#include "main.h"

/**
 * _isdigit - Function that checks for a digit (0 through 9).
 * @c: Digit to be checked
 *
 * Description: Checks if a character input is a digit.
 * Return: 1 if character is a digit and 0 if is not.
 */

int _isdigit(int c)
{
	char i;
	int value;

	value = 0;

	for (i = '0' ; i <= '9' ; i++)
	{
		if (c == i)
			value = 1;
	}
	return (value);
}
