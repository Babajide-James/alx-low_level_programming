#include "main.h"

/**
 * _strcat - The function that concatemates two strings
 * @dest: the char
 * @src: second char
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int srclen = strlen(src);
	int destlen = strlen(dest);

	for (i = 0, i <= srclen, i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}
