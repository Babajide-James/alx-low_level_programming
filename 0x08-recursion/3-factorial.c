#include "main.h"

/**
 * factorial - returns the factorial of 0 and 1
 * @n: integer givem
 * Return: -1 to indicate error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
