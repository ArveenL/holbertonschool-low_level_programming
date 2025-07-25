#include "main.h"

/**
 * prime_helper - helper function to check if number is prime
 * @n: number to check
 * @divisor: current divisor to test
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (prime_helper(n, 3));
}
