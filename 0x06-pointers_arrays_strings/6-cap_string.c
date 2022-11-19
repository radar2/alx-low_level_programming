#include "main.h"

/**
 * cap_string - capitalize string
 * @s: passed string
 * Return: returns string as uppercase
 */
char *cap_string(char *s)
{
	char *capChar = " \n\t,.!?(){}";
	char *s_copy = s;
	char *cc_copy = capChar;
	char *tmp;
	int shift = ('a' - 'A');

	if (*s_copy >= 'a' && *s_copy <= 'z')
		*s_copy -= shift;
	while (*s_copy)
	{
		for (cc_copy = capChar; *cc_copy; cc_copy++)
		{
			if (*s_copy == *cc_copy)
			{
				tmp = s_copy + 1;
				if (*tmp >= 'a' && *tmp <= 'z')
					*tmp -= shift;
				else
					continue;
			}
		}
		s_copy++;
	}
	return (s);
}
