#include "main.h"

/**
* square_root - function finds square root of value
* @y: 1st parameter
* @x: 2nd paramter
* Return: int square root to n
*/

int square_root(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}
	else
	{
		return (square_root(x + 1, y));
	}
}

/**
* _sqrt_recursion - locate the square root using recursion
* @n: parameter evaluated
* Return: square root
*/

int _sqrt_recursion(int n)
{
	int i = 1;

	return (square_root(i, n));

}
