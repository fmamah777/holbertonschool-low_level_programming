#include "main.h"

/**
 * *puts_half - prints half of a strings numbers
 *@str: is the set pointer
 * Return: always 0
 */
void puts_half(char *str)
{
	int length;
	int string;
	int half;

	for (length = 0; str[length] != '\0'; length++)
	{
		continue;
	}

		if (length % 2 == 0)
		{
			half = (length / 2);
		}
			else
			{
				half = ((length + 1) / 2);
			}
		for (string = half; string < length; string++)
		{

		_putchar(str[string]);

		}
		_putchar('\n');
}
