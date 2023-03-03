#include "main.h"
#include <stdio.h>

/**
 * rot13 - it encodes a string using rot13
 * @s: This is the char used
 * Return: Always s (Success)
 */
char *rot13(char *s)
{
	int i, j;
	char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefgijklmnopqrstuvwxyz";
	char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}

