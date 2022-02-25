#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
  * op_add - addition
  * @a: first parameter
  * @b: second parameter
  * Return: int, sum of ints
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtraction
  * @a: first parameter
  * @b: second parameter
  * Return: int, remainder ?
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplication
  * @a: first parameter
  * @b: 2nd parameter
  * Return: int, the sum
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division
  * @a: first parameter
  * @b: second parameter
  * Return: int, the sum
  */
int op_div(int a, int b)
{
	if (b <= 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}
/**
  * op_mod - integer modifiy ?
  * @a: first parameter
  * @b: second parameter
  * Return: int, remainders
  */
int op_mod(int a, int b)
{
	if (b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
