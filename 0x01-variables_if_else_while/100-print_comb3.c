#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = 49; n2 <= 57; n2++)
		{
			if (n2 > n1)
			{
				putchar(n1);
				putchar(n2);
				if ((n1 == 56 && n2 == 57) != 1)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
