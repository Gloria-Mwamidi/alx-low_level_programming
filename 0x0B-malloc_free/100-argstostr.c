#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - function that concatenates all the arguments
 *
 * @ac: input value
 * @av: pointer
 *
 * Return:  a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int len = 0, i, j, k = 0;
	char *str;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	len++;
	len++;
	}
	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
