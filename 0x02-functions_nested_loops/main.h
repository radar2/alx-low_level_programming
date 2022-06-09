#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
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
