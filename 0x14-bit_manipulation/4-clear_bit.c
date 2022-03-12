#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* clear_bit - function being used to set bit value
* @index: index of bit
* @n: number to convert
* Return: 1 for success else -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int flag = 1;

	if (n == NULL)
	return (-1);
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);
	flag = flag << index;
	flag = ~flag;
	*n = *n & flag;
	return (1);
}
