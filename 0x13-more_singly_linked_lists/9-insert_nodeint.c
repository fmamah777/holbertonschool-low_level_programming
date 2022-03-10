#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at index
 * @head: head of list
 * @n: node data
 * @idx: index where the node should go
 * Return: new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *start;
	listint_t *position;

	unsigned int x;

	if (head == NULL)
		return (NULL);
	position = *head;
	start = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);
	start->n = n;
	if (idx == 0)
{
	start->next = *head;
	*head = start;
		return (start);
}
	for (x = 0; position != NULL; x++)
{
	if (idx - 1 == x)
{
	start->next = position->next;
	position->next = start;
		return (start);
}
	position = position->next;
}
	free(start);
		return (NULL);
}
