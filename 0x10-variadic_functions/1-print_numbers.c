#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_numbers - function being used
* @separator: parameter
* @n: number
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list fm;

	va_start(fm, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(fm, int));
		if (x < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
