#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - a function that print string in reverse
 * @s: Input
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1);
}
