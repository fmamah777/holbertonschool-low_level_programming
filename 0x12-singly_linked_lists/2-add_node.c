#include "lists.h"
#include <string.h>

/**
  * add_node - function being used to add node
  * @head: first parameter used as pointer to list
  * @str: second parameter used as string in node
  * Return: list_t
  */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	if (!head || !str)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	for (len = 0; str[len]; len++)
	{}

	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
