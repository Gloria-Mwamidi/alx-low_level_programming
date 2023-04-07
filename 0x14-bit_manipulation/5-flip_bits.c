#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: input value
 * @m: input value
 *
 * Return:  the number of bits you would need to flip
 * to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int flipped = 0;

	x = n ^ m;

	while (x != 0)
	{
		if (x & 1)
		{
			flipped++;
		}
	x >>= 1;
	}
	return (flipped);
}
