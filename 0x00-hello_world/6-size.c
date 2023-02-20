#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: result (0)
 */

int main(void)
{
	char v;
	int w;
	long int x;
	long long int y;
	float z;

printf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(v));
printf("Size of an int: %1u byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a long int: %1u byte(s)\n", (unsigned long)sizeof(x));
printf("Size of long long int: %1u byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a float: %1u byte(s)\n", (unsigned long)sizeof(z));
return (0);
}
