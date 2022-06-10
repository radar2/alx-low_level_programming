#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int k;

	for (k = 0; k < 10; k++)
	{
		ch = 97;
		while (ch < 123)
		{
			_putchar(ch);
			ch++;
		}
		_putchar(10);
	}
}
