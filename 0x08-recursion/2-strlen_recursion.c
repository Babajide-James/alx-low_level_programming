#include "main.h"

/**
 * _strlen_recursion - function to return the length of a string
 * @s: given character
 * Return: the length of string.
 */
int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s)
	{
		strlen++;
		strlen += _strlen_recursion(s + 1);
	}

	return (strlen);
}
