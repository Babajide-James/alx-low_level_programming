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
	int i, j;
	int destlen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i =  0, j = destlen;
			i < n && dest[i] != '\0' && src[i] != '\0';
			i++, j++)
		dest[j] = src[i];
	return (dest);
}
