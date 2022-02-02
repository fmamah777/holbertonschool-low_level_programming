#include "main.h"
#include <stdio.h>

/**
 * more_numbers -  numbers 0 through 9
 * Return: void
 *
 */

void more_numbers(void)
{
	int x;
	int y;


	for (y = 0; y < 10; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar('0' + x / 10);
			}
			_putchar('0' + x % 10);
		}

		_putchar('\n');
	}
}
