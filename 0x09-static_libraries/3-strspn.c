#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: initial segment of the character
 * @accept: contain nly bytes from this char
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int x;
	{	    
	 	while (*s)
		{
			for (x = 0; accept[x]; x++)
			{
			if (*s == accept[x])
			{
				n++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (n);
		}
		 s++;
	}
	return (n);
}
}
