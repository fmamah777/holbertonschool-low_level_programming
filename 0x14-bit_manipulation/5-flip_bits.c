#include "holberton.h"

/**
 * flip_bits - function being used to return bit numbers
 * @n: conbersion parameter
 * @m: 2nd conversion parameter
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int z = n ^ m;

	while (i)
	{
		count += z & 1;
		z >>= 1;
	}

	return (count);
}
