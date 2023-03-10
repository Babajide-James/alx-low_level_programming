#include "main.h"

/**
 * _memset - this function fills memory with a constant byte
 * @s: given string
 * @b: the given character
 * @n: unsigned integer to be used
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
