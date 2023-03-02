#include "main.h"
#include <string.h>

/**
 * _strcat - The function that concatemates two strings
 * @dest: the char
 * @src: second char
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = strlen(dest);
	int src_len = strlen(src);

	for (i = 0, i <= src_len, i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
