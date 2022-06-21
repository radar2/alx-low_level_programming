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
	char *p = s;
	size_t len = strlen(s);
	size_t i;

	i = 0;
	while (i < len)
	{
		if (*p++ == c)
			return (s + i);
		i++;
	}
	return (NULL);

}
