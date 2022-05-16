#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: Pointer to a string.
 * @s2: Pointer to another string.
 *
 * Description: Takes to string pointers and compares characters
 * one by one.
 *
 * Return: 0 if characters aare equal, > 0 if left string has bigger Ascii
 * value and < 0 if rigth string has bigger Ascii value.
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, count;

	while (s1[a] != '\0' || s2[a] != '\0')
	{
		if (s1[a] == s2[a])
		{
			count = 0;
		}
		else
		{
			count = s1[a] - s2[a];
			break;
		}
		a++;
	}
	return (count);
}
