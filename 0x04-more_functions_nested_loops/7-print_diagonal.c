#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - this prints a diagonal line in the terminal with spaces.
 * @n: n is a parameter
 * Return: (void)
 */

void print_diagonal(int n)
{
	int z;
	int k;

	for (z = 0; z < n; z++)
	{
		for (k = 0; k < z; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');

		_putchar('\n');
	}
}
