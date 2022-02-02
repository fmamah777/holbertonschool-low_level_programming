#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0 through 9
 * Return: void
 *
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0' + x);
	}

	_putchar('\n');
}
