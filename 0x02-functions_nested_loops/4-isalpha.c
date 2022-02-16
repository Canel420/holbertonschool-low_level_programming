#include "main.h"

/**
 * _isalpha - Alphabetic characters.
 * @c: Character to be checked
 *
 * Description: this function check for alphabetic characters
 * no matter if is in upper or lower case.
 *
 * Return: 1 if is an alphabetic character and 0 if not.
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
