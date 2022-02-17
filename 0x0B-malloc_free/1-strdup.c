#include "main.h"
/**
 * _strdup - The function being used
 * @str: the variable being used
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *duplicate = NULL;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (; length >= 0; length--)
	{
		duplicate[length] = str[length];
	}

	return (duplicate);
}
