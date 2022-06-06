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
		if (m != 57)
		{
			putchar(44);
			putchar(32);
		}
		m++;
	}
	putchar('\n');
	return (0);
}
