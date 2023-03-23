#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 *
 * Return: printed strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *string = 0;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char *);

		if (string == NULL)
			printf("nil");

		else
			printf("%s", string);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}
