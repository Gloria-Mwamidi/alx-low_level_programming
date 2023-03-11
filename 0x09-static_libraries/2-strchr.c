#include "main.h"
/**
 * *_strchr - function locates a character in a string
 * @c: character to be found
 * @s: string to be checked
 *
 * Return: (0)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
