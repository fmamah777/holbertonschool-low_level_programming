#include "main.h"

/**
 *_pow_recursion - function returns the value of x raised to the power of y
 *@y: parameter exponent
 *@x: base parameter value
 *Return: int, value of x and y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
