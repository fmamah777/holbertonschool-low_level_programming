#include "3-calc.h"

/**
* get_op_func - function being used
* @s: first parameter
* Return: function or quit if null
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
	int x = 0;

	while (ops[x].op != NULL)
	{
		if (*(ops[x]).op == *s)
		break;
		x++;
	}
	return (ops[x].f);
}
