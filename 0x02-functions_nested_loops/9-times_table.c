#include "main.h"
void times_table(void)
{
	int i;
	int h;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (h = 0 ; h <= 9 ; h++)
		{
			_putchar( (i * h) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	return ;
}

int main(void)
{
	times_table();
	return (0);
}
