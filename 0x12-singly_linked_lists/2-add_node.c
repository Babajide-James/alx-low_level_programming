#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * add_node - the given function
 * @head: pointer to pointer
 * @str: pointer character
 * Return: NULL if empty
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int len = 0;

	while (str[len])
		len++;

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);

	add->str = strdup(str);
	add->len = len;
	add->next = (*head);
	(*head) = add;

	return (*head);
}
