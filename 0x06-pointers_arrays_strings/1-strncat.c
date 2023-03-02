#include "main.h"

/**
 * _strncat - This function concacatenates two strings like the first one
 * @dest: the first char
 * @src: the second char
 * @n: the integer
 * Return: Apointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen = 0;
	int srclen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i < n; i++)
		dest[destlen + i] = src[i];
	dest[i] = '\0';
	return (dest);
}
