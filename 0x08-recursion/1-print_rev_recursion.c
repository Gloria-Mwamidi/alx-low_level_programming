#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: input value
 *
 * Return: Always 0 (success0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
