#include "main.h"

/**
 * _strlen_recursion - Measure a string length
 *
 * @s: String to be measured.
 *
 * Description: Function that count the amount
 * of characters recursively.
 *
 * Return: Length of string.
 */

int _strlen_recursion(char *s)
{
	if (!s || !*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
