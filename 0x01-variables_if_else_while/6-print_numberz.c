#include <stdio.h>
/**
 * Main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int c;

	c = 0;
	while (c < 10)
       	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}
