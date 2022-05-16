#include "main.h"

/**
 * _isalpha - Checks if character is alphabetic
 * @c: The character to be checked
 *
 * Description: this checks if character is alphabetic, no matter
 * if is upper or lower case.
 *
 * Return: 1 if is alphabetic c and 0 if is not.
 */
int _isalpha(int c)
{
	char a;
	char b;
	int val = 0;

	for (a = 'A' ; a <= 'Z' ; a++)
	{
		for (b = 'a' ; b <= 'z' ; b++)
		{
			if (c == a || c == b)
				val = 1;
		}
	}
	return (val);
}
