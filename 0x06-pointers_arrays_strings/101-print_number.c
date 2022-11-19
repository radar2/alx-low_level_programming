#include "main.h"
#include <limits.h>
/**
 * print_number - prints number using putchar
 * @number: number getting printed
 * Return: void
 */
void print_number(int number)
{
	char lastDigit;
	int reversed;
	char c;

	if (number < 0)
	{
		_putchar('-');
		lastDigit = (char)('0' - (number % 10));
		number /= -10;
	}
	else
	{
		lastDigit = (char)((number % 10) + '0');
		number /= 10;
	}
	reversed = 0;
	while (number > 0)
	{
		reversed = reversed * 10 + (number % 10);
		number /= 10;
	}
	while (reversed > 0)
	{
		c = (char)((reversed % 10) + '0');
		_putchar(c);
		reversed /= 10;
	}
	_putchar(lastDigit);
}
