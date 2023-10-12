#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - this fuction perform a operation given by the use as an
 * operator.
 * @s: operator to perform.
 *
 * Return: A pointer of the func name to use.
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
	while (ops[i].op != NULL)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
