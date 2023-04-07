#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to
 * 1 at a given index
 * @n: the value to be set
 * @index: the position to set
 *
 * Return: 1 on success and -1 on failure with an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_value = 0;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	set_value = 1 << index;

	*n |= set_value;
	return (1);
}
