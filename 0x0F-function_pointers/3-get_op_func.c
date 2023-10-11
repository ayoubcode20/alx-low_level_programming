#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 *
 * @s: the operator
 *
 * Return: pointer to the correct function
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 6)
	{
		if (ops[i].op == s)
			return (ops[i].f);
		i++;
	}
}
