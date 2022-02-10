#include "main.h"

/**
  * is_prime -  determines  prime number
  * @n: returns if n is/is not prime
  * @i: checks if prime
  * Return: int, 1 or 0 true or not
  */
int is_prime(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime(n, i + 1));
}

/**
  * is_prime_number - determines if number is prime
  * @n: determine if the n is prime
  * Return: int, 1 if true, 0 if not
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
