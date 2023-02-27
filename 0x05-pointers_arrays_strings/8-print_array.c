#include "main.h"

/**
 * print_array - prints n elements of an array integer
 * @a: first integer
 * @n: next integer
 * Return: nothing if succeed
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);

		if (count != (n - 1))
			printf(", ");
		count++;
	}
	putchar('\n');
}
