#include "main.h"
/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int.
 * @b: a pointer to a string of binary
 *
 * Return: on success the converted unsigned int and
 * 0 if b is NULL or b is greater than 0 & 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int index = 0;

	if (b == NULL)
		return (0);
	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
		else
		{
			convert = convert << 1;
			convert += b[index] - '0';
			index++;
		}
	}
	return (convert);
}
