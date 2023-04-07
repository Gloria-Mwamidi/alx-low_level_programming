#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit
 * to 0 at a given index.
 * @n: pointer to a bit
 * @index: the position to be set
 *
 * Return: 1 on success and -1 on error failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_value = 0;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	set_value = 1 << index;

	*n &= ~set_value;
	return (1);
}
