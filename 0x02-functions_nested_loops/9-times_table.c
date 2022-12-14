#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int r;
	int c;
	int m;
	int n1;
	int n2;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			m = r * c;
			n1 = m / 10;
			n2 = m % 10;

			if ((c != 0) && (m < 10))
			{
				_putchar(' ');
			}
			if (n1 != 0)
			{
				_putchar(n1 + '0');
			}

			_putchar(n2 + '0');
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
