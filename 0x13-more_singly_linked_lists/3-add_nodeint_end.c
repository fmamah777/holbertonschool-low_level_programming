#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* add_nodeint_end - function being used to add node at end of list
* @head: list pointer
* @n: 3rd parameter
* Return: returns Null ?
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *start;
	listint_t *end;
		if (head == NULL)
		return (NULL);
	end = *head;
	start = malloc(sizeof(listint_t));
		if (start == NULL)
		return (NULL);
	start->n = n;
	start->next = NULL;
	if (*head == NULL)
{
	*head = start;
	return (start);
}
	while (end->next)
	end = end->next;
	end->next = start;
	return (start);
}
