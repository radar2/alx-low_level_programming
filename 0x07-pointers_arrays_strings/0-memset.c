#include <stdio.h>
#include "main.h"
/**
 * _memset - a function that fills memory whit a constant byte
 * @s: Input
 * @b: Input
 * @n: Input
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
		*p++ = b;
	return (s);
}
