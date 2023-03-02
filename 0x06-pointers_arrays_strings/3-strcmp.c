#include "main.h"

/**
 * _strcmp - This function compares two strings
 * @s1: first character
 * @s2: second character
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
