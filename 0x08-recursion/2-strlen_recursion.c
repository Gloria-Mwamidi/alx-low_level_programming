#include "main.h"
/**
 * _strlen_recursion - function that prints thee lenght of a string
 * @s: input function
 *
 * Return: Always 0 (success)
 */
int _strlen_recursion(char *s)
{
	if (*s != 0)
	{
		return  (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
