#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * Execute it to confirm 
 * Return: Always 1 for alphaetic character or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
