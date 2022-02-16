#include "main.h"

void jack_bauer(void)
{
	int i;
	int f;

	for (i = 0 ; i <= 23 ; i++ )
	{
		for (f = 0 ; f <= 59 ; f++ )
		{
			_putchar ((i / 10) + '0');
			_putchar ((i % 10) + '0');
			_putchar (':');
			_putchar ((f / 10) + '0');
			_putchar ((f % 10) + '0');
			_putchar ('\n');
		}
	}
	return ;
}

int main(void)
{
	jack_bauer();
	return (0);
}
