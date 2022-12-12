#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i, j;

for (i = 0 ; i < 100 ; c++)
{
	for (j = 0 ; j <= 100 ; j++)
	{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((1 % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (1 != 98 || j != 99)
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
