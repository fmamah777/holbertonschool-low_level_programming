#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function being used
 * @h: linked lisparameter
 * Return: returns the nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
{
	printf("%d\n", h->n);
	h = h->next;
	s++;
}
	return (s);
}
