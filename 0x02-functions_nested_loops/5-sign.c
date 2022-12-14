#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number
 *
 * Return:  1 if n is greater than zero
 *	    0 if n is zero
 *	   -1 if n is less than zero
 */
int print_sign(int n)
{
	int retvalue;

	if (n > 0)
	{
		_putchar('+');
		retvalue = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		retvalue = 0;
	}
	else
	{
		_puchar('-');
		retvalue = -1;
	}
	return (retvalue);
}
