#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - funtion being used deletes head node of linked list
* @head: ppointer to list
* Return: returns head node i think
*/

int pop_listint(listint_t **head)
{

	listint_t *temp;

	int x;

	if (head == NULL || *head == NULL)
		return (0);
	x = (*head)->x;
	temp = *head;
	*head = (*head)->next;
	free(temp);
		return (x);
}
