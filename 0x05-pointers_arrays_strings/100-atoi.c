#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define Is_NUMERIC_STRING(d) (*(char*)d >= 48) && (*(char*)d<= 57)

int _atoi(char *s)
{
	/*
	int result = 0;
	while ((*s >= '0') && (*s <= '9'))
	{
		result = (result * 10) + (*s - '0');
		s++;
	}
	return (result);
	*/
	int result = 0;
	int sign = 1;
	if (*s == ' ')
		++s;
	if (s == NULL)
		return (0);
	if ((*s) == '-')
	{
		sign = -1;

		++s;
	}

	while (Is_NUMERIC_STRING(s))
	{
		result = (result * 10) + (*s - '0');
                s++;
	}
	return (sign * result);
}
