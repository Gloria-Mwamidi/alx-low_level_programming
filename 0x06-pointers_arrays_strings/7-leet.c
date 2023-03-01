#include "main.h"
/**
 * leet - encodes a string 1337
 * @str: the string to be encoded
 *
 * return: str
 */
char *leet(char *str)
{
	int index

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] == 'a' || str[index] == 'A'
			str[index] = '4';
		else if (str[index] == 'e' || str[index] == 'E'
			str[index] = '3';
		else if (str[index] == 'o' || str[index] == 'O'
			str[index] = '0';
		else if (str[index] == 't' || str[index] == 'T'
			str[index] = '7';
		else if (str[index] == 'l' || str[index] == 'L'
			str[index] = '1';
	}
	return (str); // Return the encoded string
}
