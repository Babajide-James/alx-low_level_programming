#include "main.h"

/**
 * This directory checks if parameter is an uppercase character.
 * Input character.
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
