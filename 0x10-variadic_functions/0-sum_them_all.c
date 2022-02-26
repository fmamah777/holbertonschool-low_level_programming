#include "variadic_functions.h"

/**
  * sum_them_all - function being used
  * @n: arguments
  * Return: int
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list fm;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(fm, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(fm, int);
	}
	va_end(fm);

	return (sum);
}
