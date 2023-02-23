#include "main.h"
#include <stdio.h>
/**
 * Putchar writes the character to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, return -1. end error is set approximately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
