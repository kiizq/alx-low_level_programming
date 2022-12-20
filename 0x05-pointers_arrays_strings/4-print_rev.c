#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: string
 */
void print_rev(char *s)
{
	int count = 1, i;

	while (s[count] != '\0')
	{
		count++;
	}
	
	i = count;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

