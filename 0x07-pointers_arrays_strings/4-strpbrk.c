#include "main.h"
/**
 * *_strpbrk - fuction that locates first occurence of bytes in a string
 * @s: input value
 * @accept: input value
 *
 * Return: Always (0) sucess
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			return (s);
		}

		s++;
	}

	return ('\0');
}
