#include "main.h"

/**
 * is_prime_number - Checks if a given number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);

return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Helper function to recursively check for prime numbers.
 * @n: The number to be checked.
 * @divisor: The current divisor to check for divisibility.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
if (divisor <= n / 2)
{
if (n % divisor == 0)
{
return (0);
}
else
{
return (is_prime_helper(n, divisor + 1));
}
}
else
{
return (1);
}
}
