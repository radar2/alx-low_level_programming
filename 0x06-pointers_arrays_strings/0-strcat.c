#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: destination
 * @src: sources
 * Retrun:  a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(*dest, *src);
	return (dest);
}
