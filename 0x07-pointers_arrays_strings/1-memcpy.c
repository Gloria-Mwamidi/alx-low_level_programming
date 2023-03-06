#include "main.h"
/**
 * *_memcpy - copies byts from memory area
 * @src: memory area to be copied from
 * @dest: memory area to be copied to
 * @n: bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}
