#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_binary - print binary number
  * @n: printed binary nu,ber
  */

void print_binary(unsigned long int n)
{
	unsigned long int z;
	int print = 0;

	if (n == 0)
		_putchar('0');

	for (z = 1UL << 63; z > 0; z >>= 1)
	{
		if (n & z)
		{
			_putchar('1');
			print = 1;
		}
		else if (print)
			_putchar('0');
	}
}
