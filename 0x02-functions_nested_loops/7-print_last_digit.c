#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int x = (_abs(n) % 10);

	_putchar(x + '0');
	return (x);
}
