#include "main.h"
/**
 * print_binary - a function that prints binary representation of a number
 * @n: binary to be printed
 *
 * Return: On failure 0 on sucsess binary representation
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
