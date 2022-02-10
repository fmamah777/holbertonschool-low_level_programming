#include "main.h"

/**
 * is_prime - determines if a number is prime with recursion
 * @i: iterator
 * @n: returns back if n is or is not prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (_prime_calc(2, n));
}

/**
* _prime_calc - calculates prime numbers
* @x: 1st parameter
* @num: 2nd paramter as number
* Return: prime
*/

int _prime_calc(int x, int num)
{
	if (num % x == 0)
	{
		return (0);
	}
	if (x == num / 2)
	{
		return (1);
	}
	return (_prime_calc(x + 1, num));
}
