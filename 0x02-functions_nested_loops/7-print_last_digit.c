#include "main.h"

/**
 * This prints the last digit of a number
 *
 * Return value of the last digit number
 */

int print_last_digit(int 0)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last * -1;
	}
	_putchar(last + '0');
	return (last);
}
