#include "holberton.h"

/**
 *_strcat - a function that concatenates two strings.
 * @dest: the first parameter in the function
 * @src: The second parameter in the fucntion
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int destlength;

	for (destlength = 0; dest[destlength] != '\0'; destlength++)
	{}

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[destlength + x] = src[x];
	}

		dest[destlength + x] = '\0';
		return (dest);
}
