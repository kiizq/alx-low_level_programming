#include "main.h"

int is_sep(char c);

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0, prev_sep = 0;

	for (; s[i] != '\0'; i++)
	{
		if (prev_sep && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			prev_sep = 0;
		}
		prev_sep = is_sep(s[i]);
	}
	return (s);
}

/**
 * is_sep - check for separator
 * @c: character to be checked
 *
 * Return: 1 if True
 *         0 if False
 */
int is_sep(char c)
{
	char seps[] = {',', ';', '.', '!', '?', '\"',
		'(', ')', '{', '}', ' ', '\n', '\t'};

	int i = 0;

	while (seps[i] != '\0')
	{
		if (c == seps[i])
			return (1);
		i++;
	}
	return (0);
}

