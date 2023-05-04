#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: variable representation of the bit
 * @index: is the bit position starting from 0
 *
 * Return: -1 on failure and the value of bit at index on success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 0;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	bit = 1 << index;

	if (n & bit)
		return (1);
	else
		return (0);
}
