#include "main.h"

/**
 * puts2 -  prints every other character of a string with new line
 * @str: this is the set variable
 * Return: 0
 */
void puts2(char *str)
{
	int car;
	int truck;

	for (car = 0; str[car] != '\0'; car++)
	{
		continue;
	}
	for (truck = 0; truck < car; truck += 2)
	{
		_putchar(str[truck]);
	}
		_putchar('\n');
}
