#include "variadic_functions.h"

/**
 * p_char - prints a char
 *
 * @c: Char to be print.
 * Description: Prints a char from arguments.
 */

void p_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * p_str - prints a string
 *
 * @s: String to be print.
 * Description: Prints a string from arguments.
 */

void p_str(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * p_int - prints an integer
 *
 * @i: Integer to be print.
 * Description: Prints an integer from arguments.
 */

void p_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * p_float - prints a float
 *
 * @f: float to be print.
 * Description: Prints a float from arguments.
 */

void p_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - Prints any type of argument given (char,
 * string, integer, float)
 *
 * @format: Constant format
 * Description: Prints any type of  argument given.
 */

void print_all(const char * const format, ...)
{
	int i, j;

	temp p[] = {
		{"c", p_char},
		{"s", p_str},
		{"i", p_int},
		{"f", p_float},
		{NULL, NULL}
	};

	va_list ap;
	char *separator = "";

	va_start(ap, format);
	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
