#include "main.h"
/**
 * factorial - fuction that get the factorialof a given number
 * @n: input value
 *
 * Return: Always 0 (success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

