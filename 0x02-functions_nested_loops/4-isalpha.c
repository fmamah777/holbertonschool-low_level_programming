#include "main.h"

/**
 * _islower - check if lowercase if 1
 *
 * @c:checking for alphabetic characters
 *
 * Return: 1 or 0
 */
int _isalpha(int c);
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
