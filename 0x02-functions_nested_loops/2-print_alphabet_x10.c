#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: always 0.
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 10; x > 0; x--)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
