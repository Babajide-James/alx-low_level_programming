#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: result 0
 *
 *
 * Don't be discouraged
 *
 *
 * It is getting serious
 *
 *
 * i move
 *
 * All code should be in the main function
 */

int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
		if (d != c && d < c)
		{
		putchar('0' + d);
		putchar('0' + c);

		if (c + d != 17)
		{
		putchar(',');
		putchar(' ');
		}
		}
		c++;
		}
		d++;
	}
	putchar('\n')
	return (0);
}
