#include "main.h"

/**
 * print_array - prints an array, followed by a new line
 * @a: pointer to array
 * @n: size of the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
