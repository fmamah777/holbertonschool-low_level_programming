#include "main.h"
/**
 * print_number - this function will print an integer
 *@n: will be printed as the integer in the terminal
 * Return: 0
 */
void print_number(int n)
{
	unsigned int num, div = 10;
	/*
	 * if negative number print -1 and (n)
	 * then print each number that is there.
	 * or else print whatever digit appears to be in front and iterate upwards.
	 */

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;

	if (num / 10 > 0)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}
