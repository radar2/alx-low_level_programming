#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	ch = 97;
	while (ch < 122)
	{
		_putchar(ch);
		ch++;
	}
	_putchar(10);
}
