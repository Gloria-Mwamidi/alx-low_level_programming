#include "main.h"

/**
 * clear_bit - a function that sets the value
 * of a bit to 0 at a given index
 * @n: a variable representation of the bit
 * @index: a bit position in n
 * Return: 1 on success and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int rembit = 0;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	rembit = 1 << index;

	*n &= ~rembit;
	return (1);
}
