#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 *
 * @name: Name to be printed
 * @f: Function that prints a name as specified.
 *
 * Description: Function pointer that prints a name
 * using user own function specifications.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
