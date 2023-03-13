#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: character for prototype
 * @s2: and this inclusive
 * Return: 0 if Null
 */
char *str_concat(char *s1, char *s2)
{
	char *monk;
	int i, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = x = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[x] != '\0')
		x++;
	monk = malloc(sizeof(char) * (i + x + 1));

	if (monk == NULL)
		return (NULL);
	i = x = 0;

	while (s1[i] != '\0')
	{
		monk[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
	{
		monk[i] = s2[x];
		i++, x++;
	}
	monk[i] = '\0';
	return (monk);
}
