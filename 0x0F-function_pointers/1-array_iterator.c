#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a paremeter
 * @size: is the size of the array
 * @array: array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
