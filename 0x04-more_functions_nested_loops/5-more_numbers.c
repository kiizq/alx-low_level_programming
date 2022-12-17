#include "main.h"

void print_0_14(void);

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14,
 *                 followed by a new line
 */
void more_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		print_0_14();
		_putchar('\n');
	}
}

/**
 * print_0_14 - prints 0 to 14
 */
void print_0_14(void)
{
	int n;
	char c1;
	char c2;

	for (n = 0; n <= 14; n++)
	{
		c1 = n / 10;
		c2 = n % 10;

		if (c1 == 1)
			_putchar(c1 + '0');
		_putchar(c2 + '0');

	}
}

