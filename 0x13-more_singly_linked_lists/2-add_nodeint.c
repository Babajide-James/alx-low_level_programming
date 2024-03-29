#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the beginning
 * @head: pointer rto pointer given
 * @n: integer given
 * Return: Always 0 (success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
