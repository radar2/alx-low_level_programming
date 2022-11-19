#include "main.h"
/**
 * rot13 - rotates the characters 13 places
 * @s: passed string
 * Return: string rotated
 */
char *rot13(char *s)
{
	char *original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *translate = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *new = s;
	int i;

	while (*new)
	{
		for (i = 0; original[i]; i++)
		{
			if (*new == original[i])
			{
				*new = translate[i];
				break;
			}
		}
		new++;
	}
	return (s);

}
