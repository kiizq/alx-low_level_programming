#include "main.h"

int _factorial(int n);
/**
 * factorial - returns the factorial of a given number
 * @n: integer
 *
 * Return: factorial of integer n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
