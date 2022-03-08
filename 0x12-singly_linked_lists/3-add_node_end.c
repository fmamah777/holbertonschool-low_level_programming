#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include "string.h"

/**
* add_node_end - function being used adds node and end of a list
* @head: pointer to the list
* @str: the string
* Return: list node object
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end;

	if (!head || !str)

		return (NULL);
	end = *head;
	new = malloc(sizeof(list_t));

	if (!new)

		return (NULL);
	new->str = strdup(str);

	if (!new->str)
{
	free(new);

	return (NULL);
}
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
{
	*head = new;

	return (new);
}
	while (end->next != NULL)
	end = end->next;
	end->next = new;

	return (new);
}
