#include "main.h"
/**
 * print_number - a function that print the numbers
 * Retutn: 0-9
 */
void print_number(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
