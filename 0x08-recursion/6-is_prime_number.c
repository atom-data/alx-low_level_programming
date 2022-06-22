#include "main.h"

/**
 * prime_check - check if a number is a prime
 * @m: number to be checked
 * @d: divisor to be tested
 *
 * Return: 1 if divisors exist 0 otherwise
 */

int prime_check(int m, int d)
{
	if (m < 2 || m % d == 0)
		return (0);
	else if (d > m / 2)
		return (1);
	else
		return (prime_check(m, d + 1));
}

/**
 * is_prime_number - check if a number is prime
 * @n: input to be checked
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
