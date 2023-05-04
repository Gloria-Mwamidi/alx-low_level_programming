#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: the variable representation of the bit
 * @index: the position starting from 0 of the bit to be set
 *
 * Return: on success 1 and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 0;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	set = 1 << index;

	*n |= set;

	return (1);
}
