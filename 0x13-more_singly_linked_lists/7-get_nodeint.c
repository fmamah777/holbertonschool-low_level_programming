#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - function being used prints node at index
* @head: list head
* @index: index of the node,
* Return: node if no node than NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
	return (NULL);
	for (x = 1; x <= index; x++)
{

	if (head->next)

	head = head->next;
	else
	return (NULL);
}
	return (head);
}
