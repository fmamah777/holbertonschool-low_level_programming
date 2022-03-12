#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * binary_to_uint - function used
  * @b: binary number
  * Return: decimal int
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, base = 1;
	int z;

	if (!b)
		return (0);

	for (z = 0; b[z]; z++)
	{
		if (b[z] != '0' && b[z] != '1')
			return (0);
	}
	for (--z; z >= 0; z--)
	{
		if (b[z] == '1')
			uint += base;
		base *= 2;
	}

	return (uint);
}
