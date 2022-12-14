#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char *output = "_putchar\n";

	while (*output)
	{
		_putchar(*output);
		output++;
	}
	return (0);
}
