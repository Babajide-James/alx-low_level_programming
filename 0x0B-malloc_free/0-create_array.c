#include "main.h"
#include <stdlib.h>

/**
 * create_array - This function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the character given
 * @c: second character given
 * Return: Null if c = 0
 */
char *create_array(unsigned int size, char c)
{
	char *fir;
	unsigned int s;

	fir = malloc(sizeof(char) * size);
	if (size == 0 || fir == NULL)

		return (NULL);

	for (s = 0; s < size; s++)

		fir[s] = c;
	return (fir);
}
