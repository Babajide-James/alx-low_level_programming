#include "main.h"

/**
 * _puts_recursion - is a function that prints a string, followed by a line
 * @s: the character given. This is used for the output
 * Return: A new line if success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
