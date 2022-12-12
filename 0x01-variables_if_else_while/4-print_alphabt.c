#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c == 'q' || c == 'e') != 1)
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

