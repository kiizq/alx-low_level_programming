#include "main.h"

void print_space(int, int);

void print_hash(int);

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i;

	if (size <= 0)
		return;
	for (i = 1; i <= size; i++)
	{
		print_space(i, size);
		print_hash(i);
		_putchar('\n');
	}
}

/**
 * print_space - prints n spaces
 * @n: number of spaces
 * @size: size of triangle
 */
void print_space(int n, int size)
{
	int i;

	n = (size - n);
	if (n <= 0)
		return;
	for (i = 1; i <= n; i++)
		_putchar(' ');
}

/**
 * print_hash - prints '#'
 * @n: number os hashes
 */
void print_hash(int n)
{
	int i;

	if (n <= 0)
		return;
	for (i = 1; i <= n; i++)
		_putchar('#');
}
