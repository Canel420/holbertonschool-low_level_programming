#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers
 *
 * @separator: Special character to use between numbers.
 * @n: Amount of numbers to be print.
 *
 * Description: Print any amount of numbers given
 * as arguments.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	/* Initialize the argument list */
	va_start(ap, n);

	while (i < n)
	{
		printf("%d", va_arg(ap, int));

		if (separator == NULL)
			continue;

		if (i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
