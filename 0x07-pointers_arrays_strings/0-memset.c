#include "main.h"
/**
 * *_memset - function that changes the bytes of a memory area
 * @s: pointer to memory area
 * @n: the first bytes of memory area to be changed
 * @b: the consant bytes for memory area
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
