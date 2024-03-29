#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory using malloc
 * @b: integer given
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
