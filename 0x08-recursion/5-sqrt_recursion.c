#include "main.h"

/**
 * _sqrt_recursion - gives square root of recursion
 * @n: the given integer
 * Return: -1 if no square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - find natural number using recursion
 * @n: number given
 * @i: integer given
 * Return: the square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actua_sqrt_recursion(n, i + 1));
}
