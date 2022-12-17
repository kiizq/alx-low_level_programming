#include "main.h"

/**
 * print_square - prints a square,
 *                followed by a new line
 * @size: size of the square
 *
 * Description:
 * Uses '#' to draw the square
 */
void print_square(int size)
{
	int r;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
