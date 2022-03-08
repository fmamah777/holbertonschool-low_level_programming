#include "lists.h"

/**
  * list_len - function being used
  * @h: first paramter pointer to head
  * Return: list length
  */

size_t list_len(const list_t *h)
{
	size_t ele_count = 0;

	if (!h)
		return (ele_count);

	while (h)
	{
		ele_count++;
		h = h->next;
	}
	return (ele_count);
}
