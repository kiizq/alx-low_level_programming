#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int tho;
	int hun;
	int ten;
	int bas;

for (tho = 0 ; tho < 100 ; tho++)
{
	for (hun = 0 ; hun <= 100 ; hun++)
	{
		for (ten = 0 ; ten < 100 ; ten++)
		{
			for ( bas = 0 ; bas < 100 ; bas++)
			{
				putchar('0' + tho);
				putchar('0' + hun);
				putchar(32);
				putchar('0' + ten);
				putchar('0' + bas);
				if (!(tho == 99 && hun == 88))
				{
					putchar(',');
					putchar(32);
				}
				bas++;
			}
		}
	}
}
	putchar('\n');
	return (0);
}
