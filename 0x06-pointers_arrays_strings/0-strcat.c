#include "main.h"

/**
 * _strcat - sticks src onto end of dest array
 * @dest: end array
 * @src: array on end
 * Return: full array
 */
char *_strcat(char *dest, char *src)
{
	int dest_i, src_i;

	dest_i = 0;
	src_i = 0;

	while (dest[dest_i] != '\0')
	{
		dest_i++;
	}
	while (src[src_i] != '\0')
	{
		dest[dest_i] = src[src_i];
		dest_i++;
		src_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}
