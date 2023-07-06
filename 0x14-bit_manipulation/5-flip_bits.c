#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: a bit variable representation
 * @m: a bit variable representation
 * Return: on success a flipped bitt
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0;
	unsigned long int bit;

	bit = n ^ m;

	while (bit != 0)
	{
		if (bit & 1)
		{
			flip++;
		}
		bit >>= 1;
	}
	return (flip);
}
