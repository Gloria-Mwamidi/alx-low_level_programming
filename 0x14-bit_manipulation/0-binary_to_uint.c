#include "main.h"
/**
 * binary_to_uint - a function that converts a binary to unsinged int
 * @b: a pointer to the string off 0 and 1 chars
 *
 * Return: On failure 0 on success the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int con = 0;

	if (b == 0)
	{
		return (0);
	}
	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
		else
		{
			con = con << 1;
			con += b[index] - '0';
			index++;
		}
	}
	return (con);
}

