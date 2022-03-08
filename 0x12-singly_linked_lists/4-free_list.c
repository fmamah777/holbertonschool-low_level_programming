#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* free_list - is a function that frees a list
* @head: is the pointer to the list
* Return: void
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
{
	temp = head;
	head = head->next;
	free(temp->str);
	free(temp);
}
}
