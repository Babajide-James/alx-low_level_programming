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
printf("size of a char: %1u byte(s)\n", (unsigned long)sizeof(v));
printf("size of an int: %1u byte(s)\n", (unsigned long)sizeof(w));
printf("size of a long int: %1u byte(s)\n", (unsigned long)sizeof(x));
printf("size of long long int: %1u byte(s)\n", (unsigned long)sizeof(y));
printf("size of a float: %1u byte(s)\n", (unsigned long)sizeof(z));
return (0);
}
