#include "variadic_functions.h"

/**
  * print_c - print a char
  * @ag: argument list
  * @sep: seperator string
  */
void print_c(va_list ag, char *sep)
{
	printf("%s%c", sep, va_arg(ag, int));
}

/**
  * print_i - print an int
  * @ag: argument list
  * @sep: seperator string
  */
void print_i(va_list ag, char *sep)
{
	printf("%s%d", sep, va_arg(ag, int));
}

/**
  * print_f - print a float
  * @ag: argument list
  * @sep: seperator string
  */
void print_f(va_list ag, char *sep)
{
	printf("%s%f", sep, va_arg(ag, double));
}

/**
  * print_s - print a string
  * @ag: argument list
  * @sep: seperator string
  */
void print_s(va_list ag, char *sep)
{
	char *str = va_arg(ag, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s%s", sep, str);
}
