#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* delete_dnodeint_at_index - funtion deletes the node
* @head: head of double linked list
* @index: index of the node to delete
* Return: returns 1 for success, else -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *prev = NULL;
	unsigned int count = 0;

	if (!(head && *head))
		return (-1);
	if (index == 0)
	{
		temp = *head;
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}
	while (temp && (count < index))
	{
		prev = temp;
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-1);
	if (prev != NULL)
	{
		if (temp->next != NULL)
		{
			temp->next->prev = temp->prev;
		}
		temp->prev->next = temp->next;
	}
	temp->next = NULL;
	temp->prev = NULL;
	free(temp);
	return (1);
}
