#include "holberton.h"
/**
  * print_diagonal - Entry Point
  * @n: number of times print '_'
  * Return: 0 (Success)
  */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (z = 0; z < n; z++)
	{
		for (k = 0; k < i; k++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
