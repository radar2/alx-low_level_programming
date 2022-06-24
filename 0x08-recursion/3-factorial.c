#include <stdio.h>
#include "main.h"

/**
 * factorial - a function that return the factorial of a given number
 * @n: Input
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
