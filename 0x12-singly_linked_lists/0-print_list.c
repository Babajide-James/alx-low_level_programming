#include "lists.h"
#include <stdio.h>

/**
 * size_t - the size of the list
 * @print_list: print the list
 * @h: the pointer given
 * Return: the number if nodes
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}
		return (x);
}
