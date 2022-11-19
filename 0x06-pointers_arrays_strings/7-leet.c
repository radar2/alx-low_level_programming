#include "main.h"

/**
 * leet - translate characters to leet
 * @a: passed string
 * Return: translated string
 */
char *leet(char *a)
{
	char *original = "aeotl";
	char *translation = "43071";
	char *new = a;
	int shift = ('a' - 'A');
	int i;

	while (*new)
	{
		for (i = 0; original[i]; i++)
		{
			if (*new == original[i] || *new == original[i] - shift)
				*new = translation[i];
		}
		new++;
	}
	return (a);
}
