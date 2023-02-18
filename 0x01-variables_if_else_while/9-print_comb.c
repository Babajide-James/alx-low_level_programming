#include <stdio.h>
/**
 * prints all possible combinations of single-digit numbers.
 *
 * Return: Entry 0
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 0)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
