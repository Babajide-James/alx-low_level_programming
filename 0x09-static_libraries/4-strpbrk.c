#include "main.h"

/**
 * _strpbrk - it searches a sring for any of a set of bytes
 * @s: input char
 * @accept: input string 2
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}

	return ('\0');
}
