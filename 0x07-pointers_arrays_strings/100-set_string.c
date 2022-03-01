#include "main.h"

/**
 * set_string - Function that sets the value of a pointer
 * to a char.
 *
 * @s: Pointer to pointer s.
 * @to: Pointer to variable.
 *
 * Description: Sets the value of pointer s to the value of pointer to.
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
