#include "main.h"

/**
 * set_bit - a function that sets the value
 * of a bit to 1 at a given index
 * @n: constant variable representation of a bit
 * @index: a position in n
 * Return: 1 on success and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int put = 0;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	put = 1 << index;

	*n |= put;

	return (1);
}
