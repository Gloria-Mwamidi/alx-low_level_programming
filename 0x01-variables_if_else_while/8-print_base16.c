#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int b;
char lc;

for (b = '0'; b <= '9'; b++)
putchar(b);
for (lc = 'a'; lc <= 'f'; lc++)
putchar(lc);
putchar('\n');

return (0);
}
