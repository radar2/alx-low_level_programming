#include <stdio.h>
#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: Input
 * @src: Input
 * @n: Input
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	char *q = src;

	while (n-- > 0)
		*p++ = *q++;
	return (p);
}
