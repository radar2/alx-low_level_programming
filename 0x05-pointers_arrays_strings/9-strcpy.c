#include "main.h"
/**
 * _strcpy - takes string from src array and copies to dest
 * @dest: destination array
 * @src: array we copy
 * Return: Returns dest array, which is a copy of src
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
