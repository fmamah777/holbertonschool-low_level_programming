#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
* delete_nodeint_at_index - this is a function that deletes the node at
* index of a linked list
* @head: this is a pointer to the list
* @index: is the index of the node that should be deleted, starts at 0
* Return: returns 1 if succeessful, -1 if not
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;

	listint_t *temp;
	listint_t *delete = NULL;

	if (head == NULL || (*head) == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
{
	*head = temp->next;
	free(temp);
		return (1);
}
	while (index != x && temp != NULL)
{
	delete = temp;
	temp = temp->next;
	x += 1;
}
	if (index != x)
{
		return (-1);
}
	if (delete == NULL)
		return (-1);
	delete->next = temp->next;
	free(temp);
		return (1);
}
