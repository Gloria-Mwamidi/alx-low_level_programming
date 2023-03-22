#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: a pointer to a function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
