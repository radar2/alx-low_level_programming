#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: destination
 * @src: sources
 * Return:  a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t src_len = strlen(src);
	size_t i;

	for (i = 0; i < src_len && src[i] != '\0' ; i++)
	{
		dest[dest_len + 1] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
