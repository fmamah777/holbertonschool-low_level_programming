#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: is a variable
 * @b: is a variable
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
