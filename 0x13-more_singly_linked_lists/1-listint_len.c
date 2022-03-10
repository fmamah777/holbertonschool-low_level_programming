#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function being used
* @h: list
* Return: elements
*/

size_t listint_len(const listint_t *h)
{
	size_t s = 0;
	while (h)
{
	h = h->next;
	s++;
}
	return (s);
}
