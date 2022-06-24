#include "main.h"
int prime_checker(int n, int i);
/**
 * is_prime_number - a function
 * @n: Input
 * Return: 1 if is prime numbet or 0 else
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * prime_checker - a function
 * @n: input to check
 * @i: Input
 * Return: int
 */
int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}
