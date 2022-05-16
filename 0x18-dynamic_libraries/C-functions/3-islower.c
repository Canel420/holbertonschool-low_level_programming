#include "main.h"
/**
 * _islower - Checks for lowercases.
 * @c: The character to be checked
 *
 * Description: this checks for lowercase characters, returning 1
 * if it is and 0 if its not.
 *
 * Return: 1 if c is lowercase. 0 if is not.
 */
int _islower(int c)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		if (c == a)
		{
			return (1);
		}
	return (0);
}
