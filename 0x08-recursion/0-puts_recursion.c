#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - a function that print a string, foloowed by new line
 * @s: Input
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
