#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - alphabet lowercase
 *
 *@c: the char value
 *
 * Return: 1  if true or 0 else
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
