#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase
 * @c: string array
 *
 * Return: pointer to the string
 */
char *string_toupper(char *c)
{
	int i = 0;

	for (; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i]  -= 32;
	}
	c[i] = '\0';
	return (c);
}

