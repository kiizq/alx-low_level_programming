#include "main.h"

/**
 * print_number - prints a number
 * @n: number to print
 */

void print_number(int n)
{
	double divider, next;
	int ans, i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	divider = 10.0;
	next = n;

	do {
		divider *= 10;

	} while ((int)(next / divider) > 0);

	i = 10;
	while (i <= divider)
	{
		ans = (int)((n / divider) * i) % 10;
		if (i == divider)
		{
			if (ans != 0)
				_putchar(ans + '0');
		}
		else
		{
			_putchar(ans + '0');
		}
		i *= 10;
	}
}
