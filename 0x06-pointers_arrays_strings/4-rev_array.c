#include "main.h"

/**
 * reverse_array - this function reverses the content of an array of integers
 * @a: integer first
 * @n: integer second
 * Return: Always 0 (Success).
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
