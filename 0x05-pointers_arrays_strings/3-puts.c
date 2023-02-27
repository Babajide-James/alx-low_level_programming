#include "main.h"

/**
 * _puts - It prints a string, followed by a line
 * str - puts the code
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
