#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings
 *
 * @separator: Special character to use between numbers.
 * @n: Amount of strigs to be print.
 *
 * Description: Print any amount of strings given
 * as arguments.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;

	/* Initialize the argument list */
	va_start(ap, n);

	for (i = 0; i < n ; i++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		if (str == NULL)
			printf("(nil)");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
