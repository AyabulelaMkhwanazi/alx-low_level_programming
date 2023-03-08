#include "main.h"
#include <stdio.h>

int check_prime(int n, int i)

/**
 * is_prime_number - function return a prime number
 * @n: number to scan
 * Return: integer
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if number is prime
 * @n: the number to scan
 * @i: the iteration
 * Return: 1 if prime, otherwise 0
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
