#include "3-calc.h"

/**
 * get_op_func - Receives a string with desire operation and
 * two integers to aplly it.
 *
 * @s: Operation to do (+, -, *, /, %)
 *
 * Description: Call the desire operation.
 * Return: Function operation if exist in the program or
 * NULL if not.
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*(ops[i]).op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
