#include <stdio.h>

/**
 * It it awesome to be the best in C
 *
 * Return: Always 0)
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (1 < 50)
	{
	if (i == 0)
	printf("%ld", j);
	else if (i = 1)
	printf("%ld", k);
	else
	{
	k += j;
	j = k - j;
	printf(", %ld", k);
	}
	i++;
	}
	printf("\n");
	return (0);
}	
