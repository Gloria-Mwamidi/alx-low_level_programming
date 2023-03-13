#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *create_array - function creates an array of chars
 * and initializes it with a specific char
 * @c: input value
 * @size: input value
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *arr;

	if (size == 0)

	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	return (NULL);
	for (index = 0; index < size; ++index)
	{
	arr[index] = c;
	}
	return (arr);
}
