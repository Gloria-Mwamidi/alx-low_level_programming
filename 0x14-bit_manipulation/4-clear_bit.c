#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @index: the postion starting from 0 of a bit
 * @n: variable representation of a bit
 *
 * Return: on success 1 and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_bit = 0;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	set_bit = 1 << index;

	*n &= ~set_bit;
	return (1);
}

