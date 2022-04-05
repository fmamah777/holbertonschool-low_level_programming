#include "lists.h"

/**
* add_dnodeint - adds a new node at beginning of linked list
* @head: is a double pointer to the list
* @n: is the data to insert in the new node
* Return: returns new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
