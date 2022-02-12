#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s = '0';

	for (s = '0'; s <= '9'; s++)
	{
		if (s != '0')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(s);
	}
	putchar('\n');
	return (0);
}
