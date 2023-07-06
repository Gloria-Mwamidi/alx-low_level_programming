#include "main.h"
/**
 * get_bit -  a function that gets the value of a bit
 * at any given index
 * @n: a constant variable representation of value
 * @index: the postion of a value in n
 * Return: on success the value of bit at index on failure -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b = 0;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	b = 1 << index;

	if (n & b)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
