#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: input value
 * @s2: input value
 * @n: bytes to be copied
 *
 * Return: poiter to s1 and n number of bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con_s12;
	unsigned int len_1 = 0, len_2 = 0;
	unsigned int x = 0;
	unsigned int y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_1] != '\0')
		len_1++;

	while (s2[len_2] != '\0')
		len_2++;

	if (n >= len_2)
		n = len_2;

	con_s12 = malloc(sizeof(char) * (len_1 + n + 1));

	if (con_s12 == NULL)
		return (NULL);

	for (; x < len_1; x++)
		con_s12[x] = s1[x];

	for (; y < n; y++)
		con_s12[x] = con_s12[y];

	con_s12[x] = '\0';

	return (con_s12);
}
