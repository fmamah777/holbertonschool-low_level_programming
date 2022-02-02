#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers 0 through 9 and excludes 2 and 4
 * Return: void
 *
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar('0' + x);
		}
	}

	_putchar('\n');
}
