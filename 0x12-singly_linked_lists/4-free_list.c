#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - used to free a list_t list
 * @head: it is the pointer given
 * Return: NULL if nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
