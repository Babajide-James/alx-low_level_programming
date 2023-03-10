#include "main.h"

/**
 * _strstr - this function locates a substring
 * @haystack: first input
 * @needle: second input
 * Return: NULL if substring is nt found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
