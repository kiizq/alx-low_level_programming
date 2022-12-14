#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the table is for n
 */
void print_times_table(int n)
{
	int r = n;
	int c = n;
	int m;
	int n0;
	int n1;
	int n2;

	if ((n > 15) || (n < 0))
		return;

	for (r = 0; r <= n; r++)
	{
		for (c = 0; c <= n; c++)
		{
			m = r * c;
			n0 = m / 100;
			n1 = (m % 100) / 10;
			n2 = m % 10;

			if (c != 0)
			{
				if (n0 == 0) /* n0 */
					_putchar(' ');
				else
					_putchar(n0 + '0');

				if ((n1 == 0) && (n0 == 0)) /* n1 */
					_putchar(' ');
				else
					_putchar(n1 + '0');
			}
			_putchar(n2 + '0'); /* n2 */
			if (c != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
