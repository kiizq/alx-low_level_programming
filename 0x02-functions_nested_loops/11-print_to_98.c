#include <stdio.h>
#include "main.h"

/**
 * print - format output before
 * @i: output integer
 */
void print(int i);

/**
 * print_to_98 - prints all natural numbers from n to 98,
 *               followed by a new line
 * @n: start value
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			print(i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			print(i);
		}
	}
	putchar('\n');
}

/**
 * print - format output before
 * @i: output integer
 */
void print(int i)
{
	if (i == 98)
		printf("%d", i);
	else
		printf("%d, ", i);
}
