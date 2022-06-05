#include <stdio.h>

void print_int(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		print_int(n/10);


	putchar(n % 10 + '0');

}

int main()
{
	int n = 1024, m = -1111;

	print_int(m);
	print_int(n);
}
