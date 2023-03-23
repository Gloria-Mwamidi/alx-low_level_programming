#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: input value
 * @...: an ellipsis for optional functions
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_parameters;
	unsigned int i, sum;

	va_start(sum_parameters, n);

	sum = 0;

	for (i = 0; i < n; i++)

	sum += va_arg(sum_parameters, int);

		va_end(sum_parameters);

		return (sum);

}
