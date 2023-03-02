#include "main.h"

/**
 * _strncat - This function concacatenates two strings like the first one
 * @dest: the first char
 * @src: the second char
 * @n: the integer
 * Return: Apointer to the resultig string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
