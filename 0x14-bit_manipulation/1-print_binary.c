#include "main.h"
/**
 * print_binary - a function that prints the binary
 * representation of a number.
 * @n: variable of the binary representation
 *
 * Return: the binary representation of a number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	printf("%ld", n & 1);

}
