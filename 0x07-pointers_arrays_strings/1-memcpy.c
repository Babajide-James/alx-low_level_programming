#include "main.h"

/**
 * _memcpy - This function copies memory area
 * @dest: pointer character
 * @src: source character
 * @n: unsigned integer
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x > i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
