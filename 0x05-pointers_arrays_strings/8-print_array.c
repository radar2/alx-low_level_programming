#include "main.h"
/**
 * print_array - prints array formatted
 * @n: number of elements we print to
 */
void print_number(int n);
void print_array(int *a, int n)
{
	int i, element, first_element;

	first_element = *(a + 0);

	if (n > 0)
	{
		print_number(first_element);
		for (i = 1; i < n; i++)
		{
			_putchar(',');
			_putchar(' ');
			element = *(a + i);
			print_number(element);
		}
	}
	_putchar('\n');

}

/**
 * print_number - uses _putchar to print multidigits
 * @n: number to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
