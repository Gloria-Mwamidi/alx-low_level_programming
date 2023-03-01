#include "main.h"
/**
 * string_toupper - converts lowercase strings to uppercase
 * @n: pointer to be changed
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i])
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] -= 32;
		i++;
	}
	return (n);
}
