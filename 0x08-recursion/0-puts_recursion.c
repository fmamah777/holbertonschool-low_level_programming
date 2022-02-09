#include "main.h"

/**
 * _puts_recursion - This function prints a string
 * @s: this parameter is the pointer being evaluated
 * Return: always 0 
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(++s);
}
