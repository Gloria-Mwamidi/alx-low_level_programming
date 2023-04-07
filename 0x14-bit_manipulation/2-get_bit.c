#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @index: bit position in binary
 * @n: the binary value
 *
 * Return: on success the value of bit at index
 * on failure -1 to represent an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_value = 0;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	bit_value = 1 << index;

	if (n & bit_value)
		return (1);
	else
		return (0);
}
