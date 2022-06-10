#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - alphabet lowercase
 *
 *@c: the char value
 *
 * Return: 1  if true or 0 else
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
