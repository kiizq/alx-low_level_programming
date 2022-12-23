#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @c: string
 *
 * Return: pointer to c
 */
char *rot13(char *c)
{
	int i = 0, j;
	char expected[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
			'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
			'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd',
			'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
			'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
			'y', 'z'};
	char wanted[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e',
		'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

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
