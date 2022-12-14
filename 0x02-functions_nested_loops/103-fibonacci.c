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
	unsigned long int sum = 0;

	sum += n2;
	count = 3;
	while ((count <= 50) && (n2 < 4000000))
	{
		tmp = n1 + n2;
		if ((tmp % 2) == 0)
			sum += tmp;
		n1 = n2;
		n2 = tmp;
		count++;
	}
	printf("%lu\n", sum);
	return (0);
}
