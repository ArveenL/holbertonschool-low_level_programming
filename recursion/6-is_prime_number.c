#include "main.h"

/**
 * _is_prime - recursive helper to check for primality
 * @n: number to check
 * @i: current divisor to test
 *
 * Return: 1 if prime, 0 otherwise
 */
int _is_prime(int n, int i)
{
	if (n <= 1)
		return 0;           /* 0 and 1 are not prime */
	if (i * i > n)
		return 1;           /* no divisors found → prime */
	if (n % i == 0)
		return 0;           /* divisible → not prime */
	return _is_prime(n, i + 1);
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return _is_prime(n, 2);   /* start checking from 2 */
}

