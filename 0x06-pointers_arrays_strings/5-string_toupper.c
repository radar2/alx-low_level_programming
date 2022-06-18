#include <stdio.h>
#include "main.h"

/**
 * string_toupper - a function that change all lowercase letters of a string to uppercase
 * @c: Input
 * Return: Uppercase string
 */
char *string_toupper(char *c)
{
	int i, tmp;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}
	return (c);
}
