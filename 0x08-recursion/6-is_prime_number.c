#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - t returns 1 if the input integer is a prime number,
 *otherwise returns 0.
 * @n: interger number
 * Return: returns 1 if interger is a prime or 0 on the contrast
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - computes if a number is prime recursively
 * @n: number been evaluated
 * @i: iterator
 *
 * Return: 1 if n is prime,0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
