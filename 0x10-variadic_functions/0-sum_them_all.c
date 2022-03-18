#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its parameters
 *
 * @n: Number of parameters.
 *
 * Description: Takes any number of parameters and added them
 * using stdarg.h macros.
 *
 * Return: Sum or 0 if parameter number is 0.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	/* Initialize the argument list */
	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		/* Get the next argument value */
		sum += va_arg(ap, int);

	/* Clean up */
	va_end(ap);
	return (sum);
}
