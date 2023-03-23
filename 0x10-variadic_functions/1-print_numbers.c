#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 *
 * Return: function and new line
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prints;
	unsigned int i;

	va_start(prints, n);

	for (i = 0; i < n; i++)

	printf("%d", va_arg(prints, int));

	{
		if (i != (n - 1) && separator != NULL)

			printf("%s", separator);

	}
	 printf("\n");


	va_end(prints);
}
