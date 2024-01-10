#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of n, or -1 for an error (if n is less than 0).
 */
int factorial(int n)
{
if (n < 0)
{
return -1;  /* Error: factorial undefined for negative numbers */
}
else if (n == 0 || n == 1)
{
return 1;   /* Base case: factorial of 0 or 1 is 1 */
}
else
{
return n * factorial(n - 1);  /* Recursive case: n! = n * (n-1)! */
}
}
