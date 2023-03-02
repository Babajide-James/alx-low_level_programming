#include "main.h"

/**
 * string_toupper - this function changes lowercase of a string to uppercase
 * @str: This is the char used
 * Return: Always 0 (Success)
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
