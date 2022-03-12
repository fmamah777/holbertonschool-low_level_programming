#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* set_bit - function being used sets bit
* @n: paramter pointing to number that chamges
* @index: bit index set to 1
* Return: returns 1 for success else -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)

	return (-1);
	*n = ((1UL << index) | *n);

	return (1);
}
