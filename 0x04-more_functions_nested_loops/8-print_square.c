#include "main.h"
#include <stdio.h>

/**
 * print_square - this prints a square the terminal with spaces.
 * @n: n is a parameter
 * Return: (void)
 */

void print_square(int n)
{
	int z;
	int k;

	for (z = 0; z < n; z++)
	{
		for (k = 0; k < n; k++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
