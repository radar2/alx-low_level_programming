#include "main.h"
/**
 * _pow_recursion - a function that return the value raised to the power
 * @x: input one
 * @y: input two
 * Return: int 
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
