#include "main.h"


/**
 * string_nconcat - Concatenate two strings up to n bytes of the second string
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	concatenated = malloc(len1 + n + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}
	strcpy(concatenated, s1);

	strncat(concatenated, s2, n);

	return (concatenated);
}
