#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - a function thats a pointer
 * @str: Input
 * Return: pointer
 */
char *_strdup(char *str)
{
	size_t size;
	size_t i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	size = strlen(str) + 1;
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ptr + i) = *(str + i);

	return (ptr);
}
