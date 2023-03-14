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
	x = y = 0;

	while (s1[x] != '\0')
	{
	x++;
	}

	while (s2[y] != '\0')
	{
		y++;
	}

	con = malloc(sizeof(char) * (x + y + 1));

		if (con == NULL)
		return (NULL);

		x = y = 0;

while (s1[x] != '\0')
{
con[x] = s1[x];
x++;
}

while (s2[y] != '\0')
{con[x] = s2[y];
y++;
x++;
}
	con[x] = '\0';
	return (con);
}
