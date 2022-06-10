#include <stdio.h>
#include <math.h>

unsigned int sqroot;
unsigned long int number;
unsigned long int rem;
unsigned int j;
unsigned int _sqrt(unsigned long int n);
unsigned long long int factorial(unsigned int n);
 unsigned long long int combination(unsigned int n, unsigned int k);
unsigned int AKS(unsigned int n);

 int main(void)
 {
 number = 612852475143;
 sqroot = _sqrt(number);

 for (j = sqroot; j <= 2; j--)
{
	rem = (number % j);

	if (rem == 0)
	{
		printf("%d\n", j);
	}
	putchar('\n');
}

return (0);
}

/**
 * AKS - Test for primality
 * @n: number whose primality is to be determined
 * Return: n if prime, nothing otherwise
 */
unsigned int AKS(unsigned int n)
{
	unsigned int k;
	unsigned int j;
	unsigned long long int l;
	
	k = 1;
	while(k <= (n / 2))
	{
		l = combination(n, k) / n;

		if (l == 0)
		{
			k++;
		}
	}
	j = k;
	if (j == (n / 2))
	{
		printf("%d\n", n);
	}
}

/**
 * combination - Total number of combinations
 * @n: Total number of items
 * @k: size of collection of n inputs
 * Return: number of k combinations of n
 */
unsigned long long int combination(unsigned int n, unsigned int k)
{
	unsigned long long int comb;

	if (k <= n)
	{
		comb = (factorial(n) / (factorial(k) * factorial(n - k)));
		return (comb);
	}
	else
	{
		return (0);
	}
}

/**
 * factorial - Determine the nth factorial of a number
 * @n: The nth input whose factorial is to be found
 * Return: The nth factorial
 */
unsigned long long int factorial(unsigned int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

/**
 * _sqrt - Approximate the integer part of the square root
 * @n: Input whose square root is to be found
 */

unsigned int _sqrt(unsigned long int n)
{
	unsigned int i;

	for (i = 750000; i*i <= n; ++i)
		return (i);
}
