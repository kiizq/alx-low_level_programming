#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int count = 1;
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	unsigned long int tmp;

	printf("%lu, %lu, ", n1, n2);
	count = 3;
	while (count <= 50)
	{
		tmp = n1 + n2;
		printf("%lu", tmp);
		n1 = n2;
		n2 = tmp;
		count++;
		if (count <= 50)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
