#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - funtion being used. adds node at start of a list
 * @head: pointer to liost
 * @n: data for node
 * Return: returns new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
