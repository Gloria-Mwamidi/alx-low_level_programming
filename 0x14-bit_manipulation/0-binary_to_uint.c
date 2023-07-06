#include" main.h"

/*
 * binary_to_unit - a function that converts a
 * binary number to an unsigned int.
 * @b: a pointer to aa string of 0 and 1
 * Return: on sucess converted number on failure 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int position;

	if (b == 0)
	{
		return (0);
	}

	while (b[position] != '\0')
	{
	
		if (b[position] != '0' && b[position] != '1')
		{
			return (0);
		}
		else
		{
			number = number << 1;
			number += b[position] - '0';
			position++;
		}
	}
	return (number);

}
