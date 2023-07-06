#include "main.h"

/**
 * print_binary - a function that prints the
 * binary representation off a number
 * @n: a constant variable that represents the
 * binary number to be printed
 * Return: on sucess the binary representation of a number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
