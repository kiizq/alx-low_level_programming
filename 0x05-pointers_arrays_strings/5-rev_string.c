#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	int tmp;

	while (*(s + i) != '\0')
	{
		i++;
	}

	i--;

	while (i > j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
		j++;
	}
}

