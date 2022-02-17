#include "main.h"
/**
 * str_concat - The function being used
 * @s1: first parameter
 * @s2: second parameter
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat = NULL;
	int s1_length, s2_length, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
	{
	}
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
	{
	}
	concat = malloc((s1_length + s2_length + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0, j = 0; i < s1_length || j <= s2_length; i++, j++)
	{
		if (i < s1_length)
			concat[i] = s1[i];
		if (j <= s2_length)
			concat[s1_length + j] = s2[j];
	}

	return (concat);
}
