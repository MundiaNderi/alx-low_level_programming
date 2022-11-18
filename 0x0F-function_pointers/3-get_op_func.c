#include "3-calc.h"
#include <stddef.h>
/**
* get_op_func - selects the correct function to perfom the operation.
* @s: the operator passed to the function.
* Return: one of the operator functions to perform calculations
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] =
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	i = 0;

	while (i < 5)
	{
		if (strcmps(s, ops[i].op == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
