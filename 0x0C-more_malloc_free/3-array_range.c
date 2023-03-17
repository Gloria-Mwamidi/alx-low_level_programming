#include "main.h"
#include <stdlib.h>
/**
 * array_range - function the creates an array of integers
 * @min: input value
 * @max: input value
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr_int;
	int index;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	arr_int = malloc(sizeof(int) * size);

		if (arr_int == NULL)
			return (NULL);

	for (index = 0; index < size; index++)
		arr_int[index] = min++;

	return (arr_int);
}
