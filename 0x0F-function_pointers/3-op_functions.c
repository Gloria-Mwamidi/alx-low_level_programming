#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - fuctions that sums two integers
 * @a: integer one
 * @b: integer two
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - functions that gives thedifference of two integers
 * @a: integer one
 * @b: integer two
 * Return: thae diference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two integers
 * @a: integer one
 * @b: integer two
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - fuction that gives the division of two integers
 * @a: integer one
 * @b: integer two
 * Return: the result of divion of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that gives the modolus of two integers
 * @a: integer one
 * @b: integer two
 * Return: the remainder of division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
