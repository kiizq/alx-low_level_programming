#include "main.h"

char check(char x);

/**
 * leet - encodes a string into 1337
 * @c: string
 *
 * Return: pointer to c
 */
char *leet(char *c)
{
	int i = 0, j;
	char expected[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char wanted[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	while (c[i] != '\0')
	{
		j = 0;
		while (expected[j] != '\0')
		{
			if (c[i] == expected[j])
			{
				c[i] = wanted[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (c);
}
