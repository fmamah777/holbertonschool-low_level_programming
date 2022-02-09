#include "main.h"

/**
* _memcpy - function that copies memory area
* @dest: destination string
* @src: source
* @n: unsigned int passed
* Return: string with copied memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
