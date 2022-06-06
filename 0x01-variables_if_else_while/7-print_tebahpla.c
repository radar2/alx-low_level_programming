#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	m = 122;
	while (m > 96)
	{
		putchar(m);
		m--;
	}
	putchar('\n');
	return (0);
}
