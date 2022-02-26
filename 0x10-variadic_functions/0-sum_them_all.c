#include "variadic_functions.h"
#include<stdio.h>

/**
 * sum_them_all - function being used
 * @n: first parameter
 * @ Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list xy;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(xy, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(xy, int);
	}

	va_end(xy);

	return (sum);
}
