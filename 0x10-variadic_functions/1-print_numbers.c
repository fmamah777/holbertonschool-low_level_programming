#include "variadic_functions.h"

/**
 * print_numbers - function being used
 * @separator: string used
 * @n: parameter
 * Return: 0
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list vl;

	va_start(vl, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(vl, int));
		if (x < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
