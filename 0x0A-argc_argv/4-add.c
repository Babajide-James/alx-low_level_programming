#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: For numbers
 * @argv: for variables
 * Return: Always 0 if success
 */
int main(int argc, char *argv[])
{
	int x;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (x = 1; x < argc; x++)
		{
			if (!atoi(argv[x]))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum = sum + argv[x];
		}
		printf("%d\n", sum);
	}
	return (0);
}
