#include "main.h"
/**
 * print_numbers - a function that print the numbers
 * Retutn: 0-9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
