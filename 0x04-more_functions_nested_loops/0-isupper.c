#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: integer value to be evaluated
 * Return: 1 if is an uppercase char.
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
