#include <stdio.h>

/**
 * main - Prints 3 combination of numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b, x, z;

	for (b = '0'; b <= '9'; b++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if (b < x && x < z)
				{
					putchar(b);
					putchar(x);
					putchar(z);

					if (b != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

