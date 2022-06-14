#include "main.h"
/**
 * puts_half - puts second half of string to output
 * @str: string passed
 * Return: Void
 */
void puts_half(char *str)
{
	int j;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	j = len / 2;
	if (len % 2 == 1)
		j++;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
