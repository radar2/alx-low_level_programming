#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	m = 48;
	while (m < 58)
	{
		putchar(m);
		m++;
	}
	m = 97;
	while (m < 103)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
