#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n1;
	int n2;
	int n3;
	int n4;

	for (n1 = 48; n1 <= 57; n1++)
	{
	for (n2 = 48; n2 <= 57; n2++)
	{
	for (n3 = 48; n3 <= 57; n3++)
	{
	for (n4 = 48; n4 <= 57; n4++)
	{
	if ((n3 + n4) > (n1 + n2))
	{
	putchar(n1);
	putchar(n2);
	putchar(32);
	putchar(n3);
	putchar(n4);
	if (((n1 == 57) && (n2 == 56) && (n3 == 57) && (n4 == 57)) != 1)
	{
	putchar(44);
	putchar(32);
	}
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

