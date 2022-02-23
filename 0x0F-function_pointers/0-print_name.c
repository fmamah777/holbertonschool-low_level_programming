#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function being used
 * @f: pointer being used
 * @name: name of the person
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
