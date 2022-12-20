#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0, j, tmp;

	while (*(str + i) != '\0')
	{
		i++;
	}


	if (i % 2 == 0)
		tmp = i / 2;
	else
		tmp = (i + 1) / 2;


	for (j = tmp; j < i; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}

