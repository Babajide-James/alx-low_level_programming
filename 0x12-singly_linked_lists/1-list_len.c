#include <stdio.h>
#include "lists.h"

/**
 * list_len - the list lenght
 * @h: pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
