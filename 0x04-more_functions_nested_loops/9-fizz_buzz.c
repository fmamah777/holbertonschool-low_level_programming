#include "main.h"
#include <stdio.h>
 
/**
 *  - this prints a square the terminal with spaces.
 * @n: n is a parameter
 * Return: (void)
 */

int main(void)
{
	int z;

	for (z = 1; z <= 100; z++)
	{
		if (z % 3 == 0 || z % 5 == 0)
		{
			if (z % 3 == 0)
			{
				printf("Fizz");
			}
			if ( z % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d",z);
		}
		if (z == 100) 
		{
			printf("\n");
			
		}
		else 
		{
			printf(" ");
		}
	}
}
