#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point here
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%i is positive\n", (unsigned int)n);
	else
		printf("%d is zero\n", n);
	return (0);
}
