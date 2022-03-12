#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - turns bit into a decimal number i think
 * @n: 1st parameter being used
 * @index: index of bit
 * Return: bit number
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
	return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
