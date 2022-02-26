#include "variadic_functions.h"

/**
  * print_strings - function being used
  * @seperator: string separation
  * @n: number
  */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list fm;
	unsigned int y;
	char *p;

	va_start(fm, n);

	for (y = 0; y < n; y++)
	{
		p = va_arg(fm, char *);
		if (p != NULL)
		{
			printf("%s", p);
		}
		else
			printf("(nil)");

		if (y < n - 1 && seperator != NULL)

			printf("%s", seperator);
	}

	printf("\n");

	va_end(fm);
}
