#include "3-calc.h"

/**
 * get_op_func - gets arithemetic operation function
 * @s: arithemetic operation identifier
 *
 * Return: correct function to perform operation
 * If operator not found, return NULL
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

	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}

	return (ops[i / 2].f);
}
