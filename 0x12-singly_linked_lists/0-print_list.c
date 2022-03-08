#include "lists.h"

/**
 * * print_list function being used
 * @h: first paramter in the function
 * Return: node
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	if (!h)
		return (node_count);

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		node_count++;
		h = h->next;
	}

	return (node_count);
}
