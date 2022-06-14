#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string in place
 * @s: string array being reversed.
 *
 */
void rev_string(char *s)
{
	char *end = s;
	char tmp;

	if (s)
	{
		while (*end)
		{
			++end;
		}
		--end;
		while (s < end)
		{
			tmp = *s;
			*s++ = *end;
			*end-- = tmp;

		}
	}
}
