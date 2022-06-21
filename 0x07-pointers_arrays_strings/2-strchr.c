#include <string.h>
#include "main.h"
/**
 * _strchr - a function that locates a characcter in a string
 * @s: Input
 * @c: Input
 * Return: Pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
