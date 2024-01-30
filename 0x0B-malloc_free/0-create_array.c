#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array -  a function that create an array of charsans
 * @size: Input
 * @c: Input
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	size_t i;

	i = 0;
	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	return (ptr);
}
