#include "main.h"
int square_root(int n, int i);
/**
 * _sqrt_recursion - a function that returns the natural square root of a num
 * @n: input
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (square_root(n, (n + 1) / 2));
}
/**
 * square_root - checks
 * @n: input
 * @i: counter
 * Return: if square root
 */
int square_root(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (square_root(n, i - 1));
}
