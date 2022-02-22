#include "main.h"

/**
 * malloc_checked - main function
 * @b: main integer
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{

	unsigned int *ptr = malloc(b);
			if (!ptr)
			{
				exit(98);
			}
			return (ptr);
}
