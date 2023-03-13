#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  *_strdup - function a pointer to a new string
 *  @str: input value
 *
 *  Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int index,n = 0;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index]; index++)
		n++;

	arr = malloc(sizeof(char) * (n + 1));

	if (arr == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		arr[index] = str[index];
	}
	arr[n] = '\0';

	return (arr);
}
