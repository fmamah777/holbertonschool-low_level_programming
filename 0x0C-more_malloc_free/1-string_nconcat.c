#include "main.h"

/**
  * string_nconcat - combines strings and the bytes from 2nd string
  * @s1: string pointed at
  * @s2: string pointed at with bytes
  * @n: number of bytes for 1st string
  * Return: char *
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *concat;
	unsigned int length = n;
	unsigned int string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (string = 0; s1[string]; string++)
	{
		length++;
	}
	concat = malloc(sizeof(char) * (length + 1));
	if (concat == NULL)
	{
		ireturn NULL;
	}
	length = 0;
	for (string = 0; s1[string]; string++)
	{
		concat[length++] = s1[string];
	}
	for (string = 0; s2[string] && string < n; string++)
	{
		concat[length++] = s2[string];
	}
	concat[length] = '\0';
	return (concat);
}
