#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - list data sum
 * @head: list head
 * Return: list sum or return 0
 */

int sum_listint(listint_t *head)
{
	nt nodesum = 0;
while (head)
{
	nodesum = nodesum + head->n;
	if (head->next)
	head = head->next;
	else
	break;
}
		return (nodesum);
}
