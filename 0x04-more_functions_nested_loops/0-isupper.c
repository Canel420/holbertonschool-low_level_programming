#include "main.h"

int _isupper(int c)
{
	char u;
	int value;

	value = 0;

	for (u = 'A' ; u <= 'Z' ; u++)
	{
		if (c == u)
			value = 1;
	}
	return (value);
}
