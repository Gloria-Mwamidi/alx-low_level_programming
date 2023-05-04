#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: set of value
 * @m: set of value
 *
 * Return: 0 on success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0;
	unsigned long int y;

	y = n ^ m;

	while (y != 0)
	{
		if (y & 1)
		{
			flip++;
		}
		y >>= 1;
	}
	return (flip);
}
