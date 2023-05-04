#include "main.h"
/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int b = 1;

	char *n = (char *)&b;

	return (*n);
}
