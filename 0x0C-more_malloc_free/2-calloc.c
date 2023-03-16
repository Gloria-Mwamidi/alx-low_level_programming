#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: no of elements
 * @size: no of bytes
 *
 * Return: pointer to an allocated memory of an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *array;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	array = mem;

	for (x = 0; x < (size * nmemb); x++)
		array[x] = '\0';

	return (mem);
}
