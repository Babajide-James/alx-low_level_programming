#include "main.h"

/**
 * _strcat - The function that concatemates two strings
 * @dest: the char
 * @src: second char
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
