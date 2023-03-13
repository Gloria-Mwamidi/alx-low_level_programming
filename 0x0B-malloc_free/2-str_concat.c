#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: input value
 * @s2: input value
 *
 * Return: pointer to a newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int x;
	int y;
	char *con;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	for (x = 0; s1[x] != '\0'; x++)

	for (y = 0; s2[y] != '\0'; y++)

	con = malloc(sizeof(char) * (x + y + 1));

		if (con == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
	{
	con[x] = s1[x];
	}
	for (y = 0; s2[y] != '\0'; y++)
	{
	con[x] = s2[y];
	}
	con[x] = '\0';

	return (con);
}
