#include "main.h"
/**
 * _strlen - gets length of string
 * @s: string passed
 * Return: returns length i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
