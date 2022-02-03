#include "main.h"

/**
 * print_rev - returns the length of a string.
 * @s: this is the set variable
 * Return: 0
 */
void print_rev(char *s)
{
	int car;
	int truck;

	for (car = 0; s[car] != '\0'; car++)
	{
		continue;
	}
	for (truck = car - 1; truck >= 0; truck--)
	{
		_putchar(s[truck]);
	}
		_putchar('\n');
}
