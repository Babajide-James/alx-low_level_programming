#include <stdio.h>

/**
 * main - This program prints arguments
 * @argc: This counts the argument
 * @argv: This vector the argument
 * Return: Always 0 if success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	printf("%s\n", argv[x]);
	return (0);
}
