#include <stdio.h>

unsigned long int check_prime(unsigned long int n);

/**
 * main - entry
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	unsigned long int n;
	unsigned long int i;
	unsigned long int i2;
	unsigned long int max = 1;


	while (1)
	{
	printf("Enter number: ");
	scanf("%lu", &n);

	for (i = 2; i <= n; i++)
	{
		if ((check_prime(i)) && ((n % i) == 0))
		{
			i2 = (n / i);
			if (check_prime(i2))
			{
				max = i2;
				break;
			}
			max = i;
		}
	}
	printf("%lu\n", max);
	}
}

/**
 * check_prime - checks if prime
 * @n: number to checked
 *
 * Return: 1 (prime)
 *         0 (not prime)
 */
unsigned long int check_prime(unsigned long int n)
{
	unsigned long int i = 2;

	if (n == 2)
		return (1);
	while (i < n)
	{
		if ((n % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
