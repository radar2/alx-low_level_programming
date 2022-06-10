#include <unistd.h>
#include "main.h"

/**
 * print_sign - alphabet lowercase
 *
 *@c: the char value
 *
 * Return: 1  if true or 0 else
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c ==0 )
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
