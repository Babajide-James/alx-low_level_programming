#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  function that returns a pointer to a newly allocated
 * string given as a parameter.
 * @str: duplicate to _strdup
 * Return: NULL if str = Null
 */
char *_strdup(char *str)
{
	char *new;
	int a, r = 0;

	if (str == NULL)
		return (NULL);

	a = 0;
	while (str[a] != '\0')
		a++;

	new = malloc(sizeof(char) * (a + 1));

		if (new == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		new[r] = str[r];
	return (new);
}
