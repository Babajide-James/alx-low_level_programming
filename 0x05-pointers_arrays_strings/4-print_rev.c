#include "main.h"

/**
 * print_rev - It prints a string in inverse, followed by a line
 * @s: the char
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}

	while (count)
	{
		s--;
		_putchar(*s);
		count--;
	}

	_putchar('\n');
}
