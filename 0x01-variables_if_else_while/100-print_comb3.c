#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prints two digits combination
 * Return: Always 0 (success)
 */
int main(void)
{
	int b, x;

	for (b = '0'; b <= '9'; b++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			if (b < x)
			{
				putchar(b);
				putchar(x);

				if (b != '8' || (b == '8' && x != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
