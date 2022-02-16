#include "main.h"

/**
* create_array - array begins here
* @size: size of characters in the array
* @c:character chosen
* Return: the char or the array
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

ptr = malloc(size * sizeof(char));
if (size == 0 || ptr == NULL)
{
return (NULL);
}
for (x = 0; x < size; x++)
{
ptr[x] = c;
}
return (ptr);
