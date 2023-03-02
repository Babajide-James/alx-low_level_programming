#include "main.h"

/**
 * reverse_array - this function reverses the content of an array of integers
 * @a: integer first
 * @n: integer second
 * Return: Always 0 (Success).
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index++)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
