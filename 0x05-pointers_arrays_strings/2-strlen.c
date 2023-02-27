#include "main.h"

/**
 * _strlen - it returns the length of a string
 * @s: This is the variable
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	return (count);
}
